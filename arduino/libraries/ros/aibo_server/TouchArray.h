#ifndef _ROS_aibo_server_TouchArray_h
#define _ROS_aibo_server_TouchArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace aibo_server
{

  class TouchArray : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t touch_length;
      float st_touch;
      float * touch;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = touch_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < touch_length; i++){
      int32_t * val_touchi = (int32_t *) &(this->touch[i]);
      int32_t exp_touchi = (((*val_touchi)>>23)&255);
      if(exp_touchi != 0)
        exp_touchi += 1023-127;
      int32_t sig_touchi = *val_touchi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_touchi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_touchi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_touchi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_touchi<<4) & 0xF0) | ((sig_touchi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_touchi>>4) & 0x7F;
      if(this->touch[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t touch_lengthT = *(inbuffer + offset++);
      if(touch_lengthT > touch_length)
        this->touch = (float*)realloc(this->touch, touch_lengthT * sizeof(float));
      offset += 3;
      touch_length = touch_lengthT;
      for( uint8_t i = 0; i < touch_length; i++){
      uint32_t * val_st_touch = (uint32_t*) &(this->st_touch);
      offset += 3;
      *val_st_touch = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_touch |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_touch |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_touch |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_touch = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_touch |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_touch !=0)
        *val_st_touch |= ((exp_st_touch)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_touch = -this->st_touch;
        memcpy( &(this->touch[i]), &(this->st_touch), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "aibo_server/TouchArray"; };
    const char * getMD5(){ return "a25e66f7f3a5ee03b523486ae89ca221"; };

  };

}
#endif