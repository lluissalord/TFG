#ifndef _ROS_dmp_DMPData_h
#define _ROS_dmp_DMPData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dmp
{

  class DMPData : public ros::Msg
  {
    public:
      float k_gain;
      float d_gain;
      uint8_t weights_length;
      float st_weights;
      float * weights;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      int32_t * val_k_gain = (int32_t *) &(this->k_gain);
      int32_t exp_k_gain = (((*val_k_gain)>>23)&255);
      if(exp_k_gain != 0)
        exp_k_gain += 1023-127;
      int32_t sig_k_gain = *val_k_gain;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_k_gain<<5) & 0xff;
      *(outbuffer + offset++) = (sig_k_gain>>3) & 0xff;
      *(outbuffer + offset++) = (sig_k_gain>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_k_gain<<4) & 0xF0) | ((sig_k_gain>>19)&0x0F);
      *(outbuffer + offset++) = (exp_k_gain>>4) & 0x7F;
      if(this->k_gain < 0) *(outbuffer + offset -1) |= 0x80;
      int32_t * val_d_gain = (int32_t *) &(this->d_gain);
      int32_t exp_d_gain = (((*val_d_gain)>>23)&255);
      if(exp_d_gain != 0)
        exp_d_gain += 1023-127;
      int32_t sig_d_gain = *val_d_gain;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_d_gain<<5) & 0xff;
      *(outbuffer + offset++) = (sig_d_gain>>3) & 0xff;
      *(outbuffer + offset++) = (sig_d_gain>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_d_gain<<4) & 0xF0) | ((sig_d_gain>>19)&0x0F);
      *(outbuffer + offset++) = (exp_d_gain>>4) & 0x7F;
      if(this->d_gain < 0) *(outbuffer + offset -1) |= 0x80;
      *(outbuffer + offset++) = weights_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < weights_length; i++){
      int32_t * val_weightsi = (int32_t *) &(this->weights[i]);
      int32_t exp_weightsi = (((*val_weightsi)>>23)&255);
      if(exp_weightsi != 0)
        exp_weightsi += 1023-127;
      int32_t sig_weightsi = *val_weightsi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_weightsi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_weightsi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_weightsi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_weightsi<<4) & 0xF0) | ((sig_weightsi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_weightsi>>4) & 0x7F;
      if(this->weights[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t * val_k_gain = (uint32_t*) &(this->k_gain);
      offset += 3;
      *val_k_gain = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_k_gain |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_k_gain |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_k_gain |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_k_gain = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_k_gain |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_k_gain !=0)
        *val_k_gain |= ((exp_k_gain)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->k_gain = -this->k_gain;
      uint32_t * val_d_gain = (uint32_t*) &(this->d_gain);
      offset += 3;
      *val_d_gain = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_d_gain |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_d_gain |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_d_gain |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_d_gain = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_d_gain |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_d_gain !=0)
        *val_d_gain |= ((exp_d_gain)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->d_gain = -this->d_gain;
      uint8_t weights_lengthT = *(inbuffer + offset++);
      if(weights_lengthT > weights_length)
        this->weights = (float*)realloc(this->weights, weights_lengthT * sizeof(float));
      offset += 3;
      weights_length = weights_lengthT;
      for( uint8_t i = 0; i < weights_length; i++){
      uint32_t * val_st_weights = (uint32_t*) &(this->st_weights);
      offset += 3;
      *val_st_weights = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_weights |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_weights |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_weights |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_weights = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_weights |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_weights !=0)
        *val_st_weights |= ((exp_st_weights)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_weights = -this->st_weights;
        memcpy( &(this->weights[i]), &(this->st_weights), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "dmp/DMPData"; };
    const char * getMD5(){ return "8e103c6e348fe8bbac70d6eb733cedf2"; };

  };

}
#endif