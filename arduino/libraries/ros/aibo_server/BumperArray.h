#ifndef _ROS_aibo_server_BumperArray_h
#define _ROS_aibo_server_BumperArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace aibo_server
{

  class BumperArray : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t paws_length;
      float st_paws;
      float * paws;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = paws_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < paws_length; i++){
      int32_t * val_pawsi = (int32_t *) &(this->paws[i]);
      int32_t exp_pawsi = (((*val_pawsi)>>23)&255);
      if(exp_pawsi != 0)
        exp_pawsi += 1023-127;
      int32_t sig_pawsi = *val_pawsi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_pawsi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_pawsi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_pawsi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_pawsi<<4) & 0xF0) | ((sig_pawsi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_pawsi>>4) & 0x7F;
      if(this->paws[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t paws_lengthT = *(inbuffer + offset++);
      if(paws_lengthT > paws_length)
        this->paws = (float*)realloc(this->paws, paws_lengthT * sizeof(float));
      offset += 3;
      paws_length = paws_lengthT;
      for( uint8_t i = 0; i < paws_length; i++){
      uint32_t * val_st_paws = (uint32_t*) &(this->st_paws);
      offset += 3;
      *val_st_paws = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_paws |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_paws |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_paws |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_paws = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_paws |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_paws !=0)
        *val_st_paws |= ((exp_st_paws)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_paws = -this->st_paws;
        memcpy( &(this->paws[i]), &(this->st_paws), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "aibo_server/BumperArray"; };
    const char * getMD5(){ return "13594be0681d59ef9bd83e3e7fb5da59"; };

  };

}
#endif