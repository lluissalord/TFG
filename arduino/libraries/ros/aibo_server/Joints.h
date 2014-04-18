#ifndef _ROS_aibo_server_Joints_h
#define _ROS_aibo_server_Joints_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace aibo_server
{

  class Joints : public ros::Msg
  {
    public:
      float jointLF1;
      float jointLF2;
      float jointLF3;
      float jointLH1;
      float jointLH2;
      float jointLH3;
      float jointRF1;
      float jointRF2;
      float jointRF3;
      float jointRH1;
      float jointRH2;
      float jointRH3;
      float tailPan;
      float tailTilt;
      float headTilt;
      float headPan;
      float headNeck;
      float mouth;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      int32_t * val_jointLF1 = (int32_t *) &(this->jointLF1);
      int32_t exp_jointLF1 = (((*val_jointLF1)>>23)&255);
      if(exp_jointLF1 != 0)
        exp_jointLF1 += 1023-127;
      int32_t sig_jointLF1 = *val_jointLF1;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointLF1<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointLF1>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointLF1>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointLF1<<4) & 0xF0) | ((sig_jointLF1>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointLF1>>4) & 0x7F;
      if(this->jointLF1 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointLF2 = (int32_t *) &(this->jointLF2);
      int32_t exp_jointLF2 = (((*val_jointLF2)>>23)&255);
      if(exp_jointLF2 != 0)
        exp_jointLF2 += 1023-127;
      int32_t sig_jointLF2 = *val_jointLF2;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointLF2<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointLF2>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointLF2>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointLF2<<4) & 0xF0) | ((sig_jointLF2>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointLF2>>4) & 0x7F;
      if(this->jointLF2 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointLF3 = (int32_t *) &(this->jointLF3);
      int32_t exp_jointLF3 = (((*val_jointLF3)>>23)&255);
      if(exp_jointLF3 != 0)
        exp_jointLF3 += 1023-127;
      int32_t sig_jointLF3 = *val_jointLF3;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointLF3<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointLF3>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointLF3>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointLF3<<4) & 0xF0) | ((sig_jointLF3>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointLF3>>4) & 0x7F;
      if(this->jointLF3 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointLH1 = (int32_t *) &(this->jointLH1);
      int32_t exp_jointLH1 = (((*val_jointLH1)>>23)&255);
      if(exp_jointLH1 != 0)
        exp_jointLH1 += 1023-127;
      int32_t sig_jointLH1 = *val_jointLH1;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointLH1<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointLH1>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointLH1>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointLH1<<4) & 0xF0) | ((sig_jointLH1>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointLH1>>4) & 0x7F;
      if(this->jointLH1 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointLH2 = (int32_t *) &(this->jointLH2);
      int32_t exp_jointLH2 = (((*val_jointLH2)>>23)&255);
      if(exp_jointLH2 != 0)
        exp_jointLH2 += 1023-127;
      int32_t sig_jointLH2 = *val_jointLH2;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointLH2<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointLH2>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointLH2>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointLH2<<4) & 0xF0) | ((sig_jointLH2>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointLH2>>4) & 0x7F;
      if(this->jointLH2 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointLH3 = (int32_t *) &(this->jointLH3);
      int32_t exp_jointLH3 = (((*val_jointLH3)>>23)&255);
      if(exp_jointLH3 != 0)
        exp_jointLH3 += 1023-127;
      int32_t sig_jointLH3 = *val_jointLH3;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointLH3<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointLH3>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointLH3>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointLH3<<4) & 0xF0) | ((sig_jointLH3>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointLH3>>4) & 0x7F;
      if(this->jointLH3 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointRF1 = (int32_t *) &(this->jointRF1);
      int32_t exp_jointRF1 = (((*val_jointRF1)>>23)&255);
      if(exp_jointRF1 != 0)
        exp_jointRF1 += 1023-127;
      int32_t sig_jointRF1 = *val_jointRF1;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointRF1<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointRF1>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointRF1>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointRF1<<4) & 0xF0) | ((sig_jointRF1>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointRF1>>4) & 0x7F;
      if(this->jointRF1 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointRF2 = (int32_t *) &(this->jointRF2);
      int32_t exp_jointRF2 = (((*val_jointRF2)>>23)&255);
      if(exp_jointRF2 != 0)
        exp_jointRF2 += 1023-127;
      int32_t sig_jointRF2 = *val_jointRF2;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointRF2<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointRF2>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointRF2>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointRF2<<4) & 0xF0) | ((sig_jointRF2>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointRF2>>4) & 0x7F;
      if(this->jointRF2 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointRF3 = (int32_t *) &(this->jointRF3);
      int32_t exp_jointRF3 = (((*val_jointRF3)>>23)&255);
      if(exp_jointRF3 != 0)
        exp_jointRF3 += 1023-127;
      int32_t sig_jointRF3 = *val_jointRF3;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointRF3<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointRF3>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointRF3>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointRF3<<4) & 0xF0) | ((sig_jointRF3>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointRF3>>4) & 0x7F;
      if(this->jointRF3 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointRH1 = (int32_t *) &(this->jointRH1);
      int32_t exp_jointRH1 = (((*val_jointRH1)>>23)&255);
      if(exp_jointRH1 != 0)
        exp_jointRH1 += 1023-127;
      int32_t sig_jointRH1 = *val_jointRH1;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointRH1<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointRH1>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointRH1>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointRH1<<4) & 0xF0) | ((sig_jointRH1>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointRH1>>4) & 0x7F;
      if(this->jointRH1 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointRH2 = (int32_t *) &(this->jointRH2);
      int32_t exp_jointRH2 = (((*val_jointRH2)>>23)&255);
      if(exp_jointRH2 != 0)
        exp_jointRH2 += 1023-127;
      int32_t sig_jointRH2 = *val_jointRH2;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointRH2<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointRH2>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointRH2>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointRH2<<4) & 0xF0) | ((sig_jointRH2>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointRH2>>4) & 0x7F;
      if(this->jointRH2 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_jointRH3 = (int32_t *) &(this->jointRH3);
      int32_t exp_jointRH3 = (((*val_jointRH3)>>23)&255);
      if(exp_jointRH3 != 0)
        exp_jointRH3 += 1023-127;
      int32_t sig_jointRH3 = *val_jointRH3;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_jointRH3<<5) & 0xff;
      *(outbuffer + offset++) = (sig_jointRH3>>3) & 0xff;
      *(outbuffer + offset++) = (sig_jointRH3>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_jointRH3<<4) & 0xF0) | ((sig_jointRH3>>19)&0x0F);
      *(outbuffer + offset++) = (exp_jointRH3>>4) & 0x7F;
      if(this->jointRH3 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_tailPan = (int32_t *) &(this->tailPan);
      int32_t exp_tailPan = (((*val_tailPan)>>23)&255);
      if(exp_tailPan != 0)
        exp_tailPan += 1023-127;
      int32_t sig_tailPan = *val_tailPan;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_tailPan<<5) & 0xff;
      *(outbuffer + offset++) = (sig_tailPan>>3) & 0xff;
      *(outbuffer + offset++) = (sig_tailPan>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_tailPan<<4) & 0xF0) | ((sig_tailPan>>19)&0x0F);
      *(outbuffer + offset++) = (exp_tailPan>>4) & 0x7F;
      if(this->tailPan < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_tailTilt = (int32_t *) &(this->tailTilt);
      int32_t exp_tailTilt = (((*val_tailTilt)>>23)&255);
      if(exp_tailTilt != 0)
        exp_tailTilt += 1023-127;
      int32_t sig_tailTilt = *val_tailTilt;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_tailTilt<<5) & 0xff;
      *(outbuffer + offset++) = (sig_tailTilt>>3) & 0xff;
      *(outbuffer + offset++) = (sig_tailTilt>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_tailTilt<<4) & 0xF0) | ((sig_tailTilt>>19)&0x0F);
      *(outbuffer + offset++) = (exp_tailTilt>>4) & 0x7F;
      if(this->tailTilt < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_headTilt = (int32_t *) &(this->headTilt);
      int32_t exp_headTilt = (((*val_headTilt)>>23)&255);
      if(exp_headTilt != 0)
        exp_headTilt += 1023-127;
      int32_t sig_headTilt = *val_headTilt;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_headTilt<<5) & 0xff;
      *(outbuffer + offset++) = (sig_headTilt>>3) & 0xff;
      *(outbuffer + offset++) = (sig_headTilt>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_headTilt<<4) & 0xF0) | ((sig_headTilt>>19)&0x0F);
      *(outbuffer + offset++) = (exp_headTilt>>4) & 0x7F;
      if(this->headTilt < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_headPan = (int32_t *) &(this->headPan);
      int32_t exp_headPan = (((*val_headPan)>>23)&255);
      if(exp_headPan != 0)
        exp_headPan += 1023-127;
      int32_t sig_headPan = *val_headPan;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_headPan<<5) & 0xff;
      *(outbuffer + offset++) = (sig_headPan>>3) & 0xff;
      *(outbuffer + offset++) = (sig_headPan>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_headPan<<4) & 0xF0) | ((sig_headPan>>19)&0x0F);
      *(outbuffer + offset++) = (exp_headPan>>4) & 0x7F;
      if(this->headPan < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_headNeck = (int32_t *) &(this->headNeck);
      int32_t exp_headNeck = (((*val_headNeck)>>23)&255);
      if(exp_headNeck != 0)
        exp_headNeck += 1023-127;
      int32_t sig_headNeck = *val_headNeck;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_headNeck<<5) & 0xff;
      *(outbuffer + offset++) = (sig_headNeck>>3) & 0xff;
      *(outbuffer + offset++) = (sig_headNeck>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_headNeck<<4) & 0xF0) | ((sig_headNeck>>19)&0x0F);
      *(outbuffer + offset++) = (exp_headNeck>>4) & 0x7F;
      if(this->headNeck < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_mouth = (int32_t *) &(this->mouth);
      int32_t exp_mouth = (((*val_mouth)>>23)&255);
      if(exp_mouth != 0)
        exp_mouth += 1023-127;
      int32_t sig_mouth = *val_mouth;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_mouth<<5) & 0xff;
      *(outbuffer + offset++) = (sig_mouth>>3) & 0xff;
      *(outbuffer + offset++) = (sig_mouth>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_mouth<<4) & 0xF0) | ((sig_mouth>>19)&0x0F);
      *(outbuffer + offset++) = (exp_mouth>>4) & 0x7F;
      if(this->mouth < 0) *(outbuffer + offset -1) |= 0x80;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t * val_jointLF1 = (uint32_t*) &(this->jointLF1);
      offset += 3;
      *val_jointLF1 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointLF1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointLF1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointLF1 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointLF1 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointLF1 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointLF1 !=0)
        *val_jointLF1 |= ((exp_jointLF1)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointLF1 = -this->jointLF1;
      uint32_t * val_jointLF2 = (uint32_t*) &(this->jointLF2);
      offset += 3;
      *val_jointLF2 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointLF2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointLF2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointLF2 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointLF2 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointLF2 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointLF2 !=0)
        *val_jointLF2 |= ((exp_jointLF2)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointLF2 = -this->jointLF2;
      uint32_t * val_jointLF3 = (uint32_t*) &(this->jointLF3);
      offset += 3;
      *val_jointLF3 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointLF3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointLF3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointLF3 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointLF3 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointLF3 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointLF3 !=0)
        *val_jointLF3 |= ((exp_jointLF3)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointLF3 = -this->jointLF3;
      uint32_t * val_jointLH1 = (uint32_t*) &(this->jointLH1);
      offset += 3;
      *val_jointLH1 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointLH1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointLH1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointLH1 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointLH1 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointLH1 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointLH1 !=0)
        *val_jointLH1 |= ((exp_jointLH1)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointLH1 = -this->jointLH1;
      uint32_t * val_jointLH2 = (uint32_t*) &(this->jointLH2);
      offset += 3;
      *val_jointLH2 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointLH2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointLH2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointLH2 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointLH2 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointLH2 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointLH2 !=0)
        *val_jointLH2 |= ((exp_jointLH2)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointLH2 = -this->jointLH2;
      uint32_t * val_jointLH3 = (uint32_t*) &(this->jointLH3);
      offset += 3;
      *val_jointLH3 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointLH3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointLH3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointLH3 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointLH3 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointLH3 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointLH3 !=0)
        *val_jointLH3 |= ((exp_jointLH3)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointLH3 = -this->jointLH3;
      uint32_t * val_jointRF1 = (uint32_t*) &(this->jointRF1);
      offset += 3;
      *val_jointRF1 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointRF1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointRF1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointRF1 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointRF1 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointRF1 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointRF1 !=0)
        *val_jointRF1 |= ((exp_jointRF1)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointRF1 = -this->jointRF1;
      uint32_t * val_jointRF2 = (uint32_t*) &(this->jointRF2);
      offset += 3;
      *val_jointRF2 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointRF2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointRF2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointRF2 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointRF2 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointRF2 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointRF2 !=0)
        *val_jointRF2 |= ((exp_jointRF2)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointRF2 = -this->jointRF2;
      uint32_t * val_jointRF3 = (uint32_t*) &(this->jointRF3);
      offset += 3;
      *val_jointRF3 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointRF3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointRF3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointRF3 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointRF3 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointRF3 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointRF3 !=0)
        *val_jointRF3 |= ((exp_jointRF3)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointRF3 = -this->jointRF3;
      uint32_t * val_jointRH1 = (uint32_t*) &(this->jointRH1);
      offset += 3;
      *val_jointRH1 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointRH1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointRH1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointRH1 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointRH1 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointRH1 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointRH1 !=0)
        *val_jointRH1 |= ((exp_jointRH1)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointRH1 = -this->jointRH1;
      uint32_t * val_jointRH2 = (uint32_t*) &(this->jointRH2);
      offset += 3;
      *val_jointRH2 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointRH2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointRH2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointRH2 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointRH2 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointRH2 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointRH2 !=0)
        *val_jointRH2 |= ((exp_jointRH2)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointRH2 = -this->jointRH2;
      uint32_t * val_jointRH3 = (uint32_t*) &(this->jointRH3);
      offset += 3;
      *val_jointRH3 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_jointRH3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_jointRH3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_jointRH3 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_jointRH3 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_jointRH3 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_jointRH3 !=0)
        *val_jointRH3 |= ((exp_jointRH3)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->jointRH3 = -this->jointRH3;
      uint32_t * val_tailPan = (uint32_t*) &(this->tailPan);
      offset += 3;
      *val_tailPan = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_tailPan |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_tailPan |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_tailPan |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_tailPan = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_tailPan |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_tailPan !=0)
        *val_tailPan |= ((exp_tailPan)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->tailPan = -this->tailPan;
      uint32_t * val_tailTilt = (uint32_t*) &(this->tailTilt);
      offset += 3;
      *val_tailTilt = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_tailTilt |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_tailTilt |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_tailTilt |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_tailTilt = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_tailTilt |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_tailTilt !=0)
        *val_tailTilt |= ((exp_tailTilt)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->tailTilt = -this->tailTilt;
      uint32_t * val_headTilt = (uint32_t*) &(this->headTilt);
      offset += 3;
      *val_headTilt = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_headTilt |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_headTilt |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_headTilt |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_headTilt = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_headTilt |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_headTilt !=0)
        *val_headTilt |= ((exp_headTilt)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->headTilt = -this->headTilt;
      uint32_t * val_headPan = (uint32_t*) &(this->headPan);
      offset += 3;
      *val_headPan = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_headPan |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_headPan |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_headPan |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_headPan = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_headPan |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_headPan !=0)
        *val_headPan |= ((exp_headPan)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->headPan = -this->headPan;
      uint32_t * val_headNeck = (uint32_t*) &(this->headNeck);
      offset += 3;
      *val_headNeck = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_headNeck |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_headNeck |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_headNeck |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_headNeck = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_headNeck |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_headNeck !=0)
        *val_headNeck |= ((exp_headNeck)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->headNeck = -this->headNeck;
      uint32_t * val_mouth = (uint32_t*) &(this->mouth);
      offset += 3;
      *val_mouth = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_mouth |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_mouth |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_mouth |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_mouth = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_mouth |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_mouth !=0)
        *val_mouth |= ((exp_mouth)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->mouth = -this->mouth;
     return offset;
    }

    const char * getType(){ return "aibo_server/Joints"; };
    const char * getMD5(){ return "86bda1606b1e8eea8ce5b24eb34df225"; };

  };

}
#endif