#ifndef _ROS_package_propi_Velocity_h
#define _ROS_package_propi_Velocity_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace package_propi
{

  class Velocity : public ros::Msg
  {
    public:
      std_msgs::Header header;
      float vel_x;
      float vel_y;
      float vel_z;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      int32_t * val_vel_x = (int32_t *) &(this->vel_x);
      int32_t exp_vel_x = (((*val_vel_x)>>23)&255);
      if(exp_vel_x != 0)
        exp_vel_x += 1023-127;
      int32_t sig_vel_x = *val_vel_x;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_vel_x<<5) & 0xff;
      *(outbuffer + offset++) = (sig_vel_x>>3) & 0xff;
      *(outbuffer + offset++) = (sig_vel_x>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_vel_x<<4) & 0xF0) | ((sig_vel_x>>19)&0x0F);
      *(outbuffer + offset++) = (exp_vel_x>>4) & 0x7F;
      if(this->vel_x < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_vel_y = (int32_t *) &(this->vel_y);
      int32_t exp_vel_y = (((*val_vel_y)>>23)&255);
      if(exp_vel_y != 0)
        exp_vel_y += 1023-127;
      int32_t sig_vel_y = *val_vel_y;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_vel_y<<5) & 0xff;
      *(outbuffer + offset++) = (sig_vel_y>>3) & 0xff;
      *(outbuffer + offset++) = (sig_vel_y>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_vel_y<<4) & 0xF0) | ((sig_vel_y>>19)&0x0F);
      *(outbuffer + offset++) = (exp_vel_y>>4) & 0x7F;
      if(this->vel_y < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_vel_z = (int32_t *) &(this->vel_z);
      int32_t exp_vel_z = (((*val_vel_z)>>23)&255);
      if(exp_vel_z != 0)
        exp_vel_z += 1023-127;
      int32_t sig_vel_z = *val_vel_z;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_vel_z<<5) & 0xff;
      *(outbuffer + offset++) = (sig_vel_z>>3) & 0xff;
      *(outbuffer + offset++) = (sig_vel_z>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_vel_z<<4) & 0xF0) | ((sig_vel_z>>19)&0x0F);
      *(outbuffer + offset++) = (exp_vel_z>>4) & 0x7F;
      if(this->vel_z < 0) *(outbuffer + offset -1) |= 0x80;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t * val_vel_x = (uint32_t*) &(this->vel_x);
      offset += 3;
      *val_vel_x = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_vel_x |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_vel_x |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_vel_x |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_vel_x = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_vel_x |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_vel_x !=0)
        *val_vel_x |= ((exp_vel_x)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->vel_x = -this->vel_x;
      uint32_t * val_vel_y = (uint32_t*) &(this->vel_y);
      offset += 3;
      *val_vel_y = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_vel_y |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_vel_y |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_vel_y |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_vel_y = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_vel_y |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_vel_y !=0)
        *val_vel_y |= ((exp_vel_y)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->vel_y = -this->vel_y;
      uint32_t * val_vel_z = (uint32_t*) &(this->vel_z);
      offset += 3;
      *val_vel_z = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_vel_z |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_vel_z |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_vel_z |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_vel_z = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_vel_z |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_vel_z !=0)
        *val_vel_z |= ((exp_vel_z)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->vel_z = -this->vel_z;
     return offset;
    }

    const char * getType(){ return "package_propi/Velocity"; };
    const char * getMD5(){ return "482b60da5b66a36096a9e7e7fb94d51f"; };

  };

}
#endif