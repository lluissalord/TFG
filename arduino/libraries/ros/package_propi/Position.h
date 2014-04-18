#ifndef _ROS_package_propi_Position_h
#define _ROS_package_propi_Position_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "package_propi/int.h"

namespace package_propi
{

  class Position : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t pos_length;
      float st_pos;
      float * pos;
      uint8_t vel_length;
      float st_vel;
      float * vel;
      package_propi::int freq;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = pos_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < pos_length; i++){
      int32_t * val_posi = (int32_t *) &(this->pos[i]);
      int32_t exp_posi = (((*val_posi)>>23)&255);
      if(exp_posi != 0)
        exp_posi += 1023-127;
      int32_t sig_posi = *val_posi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_posi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_posi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_posi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_posi<<4) & 0xF0) | ((sig_posi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_posi>>4) & 0x7F;
      if(this->pos[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      *(outbuffer + offset++) = vel_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < vel_length; i++){
      int32_t * val_veli = (int32_t *) &(this->vel[i]);
      int32_t exp_veli = (((*val_veli)>>23)&255);
      if(exp_veli != 0)
        exp_veli += 1023-127;
      int32_t sig_veli = *val_veli;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_veli<<5) & 0xff;
      *(outbuffer + offset++) = (sig_veli>>3) & 0xff;
      *(outbuffer + offset++) = (sig_veli>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_veli<<4) & 0xF0) | ((sig_veli>>19)&0x0F);
      *(outbuffer + offset++) = (exp_veli>>4) & 0x7F;
      if(this->vel[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      offset += this->freq.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t pos_lengthT = *(inbuffer + offset++);
      if(pos_lengthT > pos_length)
        this->pos = (float*)realloc(this->pos, pos_lengthT * sizeof(float));
      offset += 3;
      pos_length = pos_lengthT;
      for( uint8_t i = 0; i < pos_length; i++){
      uint32_t * val_st_pos = (uint32_t*) &(this->st_pos);
      offset += 3;
      *val_st_pos = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_pos |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_pos |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_pos |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_pos = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_pos |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_pos !=0)
        *val_st_pos |= ((exp_st_pos)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_pos = -this->st_pos;
        memcpy( &(this->pos[i]), &(this->st_pos), sizeof(float));
      }
      uint8_t vel_lengthT = *(inbuffer + offset++);
      if(vel_lengthT > vel_length)
        this->vel = (float*)realloc(this->vel, vel_lengthT * sizeof(float));
      offset += 3;
      vel_length = vel_lengthT;
      for( uint8_t i = 0; i < vel_length; i++){
      uint32_t * val_st_vel = (uint32_t*) &(this->st_vel);
      offset += 3;
      *val_st_vel = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_vel |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_vel |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_vel |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_vel = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_vel |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_vel !=0)
        *val_st_vel |= ((exp_st_vel)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_vel = -this->st_vel;
        memcpy( &(this->vel[i]), &(this->st_vel), sizeof(float));
      }
      offset += this->freq.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "package_propi/Position"; };
    const char * getMD5(){ return "5defbd163657b4f6f639ba6d5676cc01"; };

  };

}
#endif