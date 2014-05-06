#ifndef _ROS_package_propi_Position_h
#define _ROS_package_propi_Position_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace package_propi
{

  class Position : public ros::Msg
  {
    public:
      std_msgs::Header header;
      float pos_x;
      float pos_y;
      float pos_z;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      int32_t * val_pos_x = (int32_t *) &(this->pos_x);
      int32_t exp_pos_x = (((*val_pos_x)>>23)&255);
      if(exp_pos_x != 0)
        exp_pos_x += 1023-127;
      int32_t sig_pos_x = *val_pos_x;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_pos_x<<5) & 0xff;
      *(outbuffer + offset++) = (sig_pos_x>>3) & 0xff;
      *(outbuffer + offset++) = (sig_pos_x>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_pos_x<<4) & 0xF0) | ((sig_pos_x>>19)&0x0F);
      *(outbuffer + offset++) = (exp_pos_x>>4) & 0x7F;
      if(this->pos_x < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_pos_y = (int32_t *) &(this->pos_y);
      int32_t exp_pos_y = (((*val_pos_y)>>23)&255);
      if(exp_pos_y != 0)
        exp_pos_y += 1023-127;
      int32_t sig_pos_y = *val_pos_y;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_pos_y<<5) & 0xff;
      *(outbuffer + offset++) = (sig_pos_y>>3) & 0xff;
      *(outbuffer + offset++) = (sig_pos_y>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_pos_y<<4) & 0xF0) | ((sig_pos_y>>19)&0x0F);
      *(outbuffer + offset++) = (exp_pos_y>>4) & 0x7F;
      if(this->pos_y < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_pos_z = (int32_t *) &(this->pos_z);
      int32_t exp_pos_z = (((*val_pos_z)>>23)&255);
      if(exp_pos_z != 0)
        exp_pos_z += 1023-127;
      int32_t sig_pos_z = *val_pos_z;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_pos_z<<5) & 0xff;
      *(outbuffer + offset++) = (sig_pos_z>>3) & 0xff;
      *(outbuffer + offset++) = (sig_pos_z>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_pos_z<<4) & 0xF0) | ((sig_pos_z>>19)&0x0F);
      *(outbuffer + offset++) = (exp_pos_z>>4) & 0x7F;
      if(this->pos_z < 0) *(outbuffer + offset -1) |= 0x80;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t * val_pos_x = (uint32_t*) &(this->pos_x);
      offset += 3;
      *val_pos_x = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_pos_x |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_pos_x |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_pos_x |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_pos_x = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_pos_x |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_pos_x !=0)
        *val_pos_x |= ((exp_pos_x)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->pos_x = -this->pos_x;
      uint32_t * val_pos_y = (uint32_t*) &(this->pos_y);
      offset += 3;
      *val_pos_y = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_pos_y |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_pos_y |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_pos_y |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_pos_y = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_pos_y |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_pos_y !=0)
        *val_pos_y |= ((exp_pos_y)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->pos_y = -this->pos_y;
      uint32_t * val_pos_z = (uint32_t*) &(this->pos_z);
      offset += 3;
      *val_pos_z = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_pos_z |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_pos_z |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_pos_z |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_pos_z = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_pos_z |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_pos_z !=0)
        *val_pos_z |= ((exp_pos_z)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->pos_z = -this->pos_z;
     return offset;
    }

    const char * getType(){ return "package_propi/Position"; };
    const char * getMD5(){ return "e5649fba1f79e145f9f7dc145036ea50"; };

  };

}
#endif