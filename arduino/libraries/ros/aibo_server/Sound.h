#ifndef _ROS_aibo_server_Sound_h
#define _ROS_aibo_server_Sound_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace aibo_server
{

  class Sound : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t sound_values_length;
      float st_sound_values;
      float * sound_values;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = sound_values_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < sound_values_length; i++){
      int32_t * val_sound_valuesi = (int32_t *) &(this->sound_values[i]);
      int32_t exp_sound_valuesi = (((*val_sound_valuesi)>>23)&255);
      if(exp_sound_valuesi != 0)
        exp_sound_valuesi += 1023-127;
      int32_t sig_sound_valuesi = *val_sound_valuesi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_sound_valuesi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_sound_valuesi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_sound_valuesi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_sound_valuesi<<4) & 0xF0) | ((sig_sound_valuesi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_sound_valuesi>>4) & 0x7F;
      if(this->sound_values[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t sound_values_lengthT = *(inbuffer + offset++);
      if(sound_values_lengthT > sound_values_length)
        this->sound_values = (float*)realloc(this->sound_values, sound_values_lengthT * sizeof(float));
      offset += 3;
      sound_values_length = sound_values_lengthT;
      for( uint8_t i = 0; i < sound_values_length; i++){
      uint32_t * val_st_sound_values = (uint32_t*) &(this->st_sound_values);
      offset += 3;
      *val_st_sound_values = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_sound_values |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_sound_values |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_sound_values |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_sound_values = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_sound_values |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_sound_values !=0)
        *val_st_sound_values |= ((exp_st_sound_values)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_sound_values = -this->st_sound_values;
        memcpy( &(this->sound_values[i]), &(this->st_sound_values), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "aibo_server/Sound"; };
    const char * getMD5(){ return "bbf293403e3416f706e3acde83c58590"; };

  };

}
#endif