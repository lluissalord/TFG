#ifndef _ROS_aibo_driver_Joints_h
#define _ROS_aibo_driver_Joints_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace aibo_driver
{

  class Joints : public ros::Msg
  {
    public:
      float legLF1;
      float legLF2;
      float legLF3;
      float legLH1;
      float legLH2;
      float legLH3;
      float legRF1;
      float legRF2;
      float legRF3;
      float legRH1;
      float legRH2;
      float legRH3;
      float tailPan;
      float tailTilt;
      float headTilt;
      float headPan;
      float headNeck;
      float mouth;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      int32_t * val_legLF1 = (int32_t *) &(this->legLF1);
      int32_t exp_legLF1 = (((*val_legLF1)>>23)&255);
      if(exp_legLF1 != 0)
        exp_legLF1 += 1023-127;
      int32_t sig_legLF1 = *val_legLF1;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legLF1<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legLF1>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legLF1>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legLF1<<4) & 0xF0) | ((sig_legLF1>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legLF1>>4) & 0x7F;
      if(this->legLF1 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legLF2 = (int32_t *) &(this->legLF2);
      int32_t exp_legLF2 = (((*val_legLF2)>>23)&255);
      if(exp_legLF2 != 0)
        exp_legLF2 += 1023-127;
      int32_t sig_legLF2 = *val_legLF2;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legLF2<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legLF2>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legLF2>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legLF2<<4) & 0xF0) | ((sig_legLF2>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legLF2>>4) & 0x7F;
      if(this->legLF2 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legLF3 = (int32_t *) &(this->legLF3);
      int32_t exp_legLF3 = (((*val_legLF3)>>23)&255);
      if(exp_legLF3 != 0)
        exp_legLF3 += 1023-127;
      int32_t sig_legLF3 = *val_legLF3;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legLF3<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legLF3>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legLF3>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legLF3<<4) & 0xF0) | ((sig_legLF3>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legLF3>>4) & 0x7F;
      if(this->legLF3 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legLH1 = (int32_t *) &(this->legLH1);
      int32_t exp_legLH1 = (((*val_legLH1)>>23)&255);
      if(exp_legLH1 != 0)
        exp_legLH1 += 1023-127;
      int32_t sig_legLH1 = *val_legLH1;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legLH1<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legLH1>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legLH1>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legLH1<<4) & 0xF0) | ((sig_legLH1>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legLH1>>4) & 0x7F;
      if(this->legLH1 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legLH2 = (int32_t *) &(this->legLH2);
      int32_t exp_legLH2 = (((*val_legLH2)>>23)&255);
      if(exp_legLH2 != 0)
        exp_legLH2 += 1023-127;
      int32_t sig_legLH2 = *val_legLH2;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legLH2<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legLH2>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legLH2>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legLH2<<4) & 0xF0) | ((sig_legLH2>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legLH2>>4) & 0x7F;
      if(this->legLH2 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legLH3 = (int32_t *) &(this->legLH3);
      int32_t exp_legLH3 = (((*val_legLH3)>>23)&255);
      if(exp_legLH3 != 0)
        exp_legLH3 += 1023-127;
      int32_t sig_legLH3 = *val_legLH3;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legLH3<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legLH3>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legLH3>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legLH3<<4) & 0xF0) | ((sig_legLH3>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legLH3>>4) & 0x7F;
      if(this->legLH3 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legRF1 = (int32_t *) &(this->legRF1);
      int32_t exp_legRF1 = (((*val_legRF1)>>23)&255);
      if(exp_legRF1 != 0)
        exp_legRF1 += 1023-127;
      int32_t sig_legRF1 = *val_legRF1;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legRF1<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legRF1>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legRF1>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legRF1<<4) & 0xF0) | ((sig_legRF1>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legRF1>>4) & 0x7F;
      if(this->legRF1 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legRF2 = (int32_t *) &(this->legRF2);
      int32_t exp_legRF2 = (((*val_legRF2)>>23)&255);
      if(exp_legRF2 != 0)
        exp_legRF2 += 1023-127;
      int32_t sig_legRF2 = *val_legRF2;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legRF2<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legRF2>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legRF2>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legRF2<<4) & 0xF0) | ((sig_legRF2>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legRF2>>4) & 0x7F;
      if(this->legRF2 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legRF3 = (int32_t *) &(this->legRF3);
      int32_t exp_legRF3 = (((*val_legRF3)>>23)&255);
      if(exp_legRF3 != 0)
        exp_legRF3 += 1023-127;
      int32_t sig_legRF3 = *val_legRF3;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legRF3<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legRF3>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legRF3>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legRF3<<4) & 0xF0) | ((sig_legRF3>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legRF3>>4) & 0x7F;
      if(this->legRF3 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legRH1 = (int32_t *) &(this->legRH1);
      int32_t exp_legRH1 = (((*val_legRH1)>>23)&255);
      if(exp_legRH1 != 0)
        exp_legRH1 += 1023-127;
      int32_t sig_legRH1 = *val_legRH1;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legRH1<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legRH1>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legRH1>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legRH1<<4) & 0xF0) | ((sig_legRH1>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legRH1>>4) & 0x7F;
      if(this->legRH1 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legRH2 = (int32_t *) &(this->legRH2);
      int32_t exp_legRH2 = (((*val_legRH2)>>23)&255);
      if(exp_legRH2 != 0)
        exp_legRH2 += 1023-127;
      int32_t sig_legRH2 = *val_legRH2;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legRH2<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legRH2>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legRH2>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legRH2<<4) & 0xF0) | ((sig_legRH2>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legRH2>>4) & 0x7F;
      if(this->legRH2 < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_legRH3 = (int32_t *) &(this->legRH3);
      int32_t exp_legRH3 = (((*val_legRH3)>>23)&255);
      if(exp_legRH3 != 0)
        exp_legRH3 += 1023-127;
      int32_t sig_legRH3 = *val_legRH3;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_legRH3<<5) & 0xff;
      *(outbuffer + offset++) = (sig_legRH3>>3) & 0xff;
      *(outbuffer + offset++) = (sig_legRH3>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_legRH3<<4) & 0xF0) | ((sig_legRH3>>19)&0x0F);
      *(outbuffer + offset++) = (exp_legRH3>>4) & 0x7F;
      if(this->legRH3 < 0) *(outbuffer + offset -1) |= 0x80;
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
      uint32_t * val_legLF1 = (uint32_t*) &(this->legLF1);
      offset += 3;
      *val_legLF1 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legLF1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legLF1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legLF1 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legLF1 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legLF1 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legLF1 !=0)
        *val_legLF1 |= ((exp_legLF1)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legLF1 = -this->legLF1;
      uint32_t * val_legLF2 = (uint32_t*) &(this->legLF2);
      offset += 3;
      *val_legLF2 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legLF2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legLF2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legLF2 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legLF2 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legLF2 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legLF2 !=0)
        *val_legLF2 |= ((exp_legLF2)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legLF2 = -this->legLF2;
      uint32_t * val_legLF3 = (uint32_t*) &(this->legLF3);
      offset += 3;
      *val_legLF3 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legLF3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legLF3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legLF3 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legLF3 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legLF3 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legLF3 !=0)
        *val_legLF3 |= ((exp_legLF3)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legLF3 = -this->legLF3;
      uint32_t * val_legLH1 = (uint32_t*) &(this->legLH1);
      offset += 3;
      *val_legLH1 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legLH1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legLH1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legLH1 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legLH1 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legLH1 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legLH1 !=0)
        *val_legLH1 |= ((exp_legLH1)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legLH1 = -this->legLH1;
      uint32_t * val_legLH2 = (uint32_t*) &(this->legLH2);
      offset += 3;
      *val_legLH2 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legLH2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legLH2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legLH2 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legLH2 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legLH2 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legLH2 !=0)
        *val_legLH2 |= ((exp_legLH2)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legLH2 = -this->legLH2;
      uint32_t * val_legLH3 = (uint32_t*) &(this->legLH3);
      offset += 3;
      *val_legLH3 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legLH3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legLH3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legLH3 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legLH3 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legLH3 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legLH3 !=0)
        *val_legLH3 |= ((exp_legLH3)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legLH3 = -this->legLH3;
      uint32_t * val_legRF1 = (uint32_t*) &(this->legRF1);
      offset += 3;
      *val_legRF1 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legRF1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legRF1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legRF1 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legRF1 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legRF1 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legRF1 !=0)
        *val_legRF1 |= ((exp_legRF1)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legRF1 = -this->legRF1;
      uint32_t * val_legRF2 = (uint32_t*) &(this->legRF2);
      offset += 3;
      *val_legRF2 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legRF2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legRF2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legRF2 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legRF2 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legRF2 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legRF2 !=0)
        *val_legRF2 |= ((exp_legRF2)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legRF2 = -this->legRF2;
      uint32_t * val_legRF3 = (uint32_t*) &(this->legRF3);
      offset += 3;
      *val_legRF3 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legRF3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legRF3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legRF3 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legRF3 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legRF3 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legRF3 !=0)
        *val_legRF3 |= ((exp_legRF3)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legRF3 = -this->legRF3;
      uint32_t * val_legRH1 = (uint32_t*) &(this->legRH1);
      offset += 3;
      *val_legRH1 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legRH1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legRH1 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legRH1 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legRH1 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legRH1 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legRH1 !=0)
        *val_legRH1 |= ((exp_legRH1)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legRH1 = -this->legRH1;
      uint32_t * val_legRH2 = (uint32_t*) &(this->legRH2);
      offset += 3;
      *val_legRH2 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legRH2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legRH2 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legRH2 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legRH2 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legRH2 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legRH2 !=0)
        *val_legRH2 |= ((exp_legRH2)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legRH2 = -this->legRH2;
      uint32_t * val_legRH3 = (uint32_t*) &(this->legRH3);
      offset += 3;
      *val_legRH3 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_legRH3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_legRH3 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_legRH3 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_legRH3 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_legRH3 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_legRH3 !=0)
        *val_legRH3 |= ((exp_legRH3)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->legRH3 = -this->legRH3;
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

    const char * getType(){ return "aibo_driver/Joints"; };
    const char * getMD5(){ return "631ff7def727c9685eefa42cfef56ab3"; };

  };

}
#endif