#ifndef _ROS_SERVICE_LearnDMPFromDemo_h
#define _ROS_SERVICE_LearnDMPFromDemo_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "dmp/DMPTraj.h"
#include "dmp/DMPData.h"

namespace dmp
{

static const char LEARNDMPFROMDEMO[] = "dmp/LearnDMPFromDemo";

  class LearnDMPFromDemoRequest : public ros::Msg
  {
    public:
      dmp::DMPTraj demo;
      uint8_t k_gains_length;
      float st_k_gains;
      float * k_gains;
      uint8_t d_gains_length;
      float st_d_gains;
      float * d_gains;
      int32_t num_bases;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->demo.serialize(outbuffer + offset);
      *(outbuffer + offset++) = k_gains_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < k_gains_length; i++){
      int32_t * val_k_gainsi = (int32_t *) &(this->k_gains[i]);
      int32_t exp_k_gainsi = (((*val_k_gainsi)>>23)&255);
      if(exp_k_gainsi != 0)
        exp_k_gainsi += 1023-127;
      int32_t sig_k_gainsi = *val_k_gainsi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_k_gainsi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_k_gainsi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_k_gainsi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_k_gainsi<<4) & 0xF0) | ((sig_k_gainsi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_k_gainsi>>4) & 0x7F;
      if(this->k_gains[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      *(outbuffer + offset++) = d_gains_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < d_gains_length; i++){
      int32_t * val_d_gainsi = (int32_t *) &(this->d_gains[i]);
      int32_t exp_d_gainsi = (((*val_d_gainsi)>>23)&255);
      if(exp_d_gainsi != 0)
        exp_d_gainsi += 1023-127;
      int32_t sig_d_gainsi = *val_d_gainsi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_d_gainsi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_d_gainsi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_d_gainsi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_d_gainsi<<4) & 0xF0) | ((sig_d_gainsi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_d_gainsi>>4) & 0x7F;
      if(this->d_gains[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      union {
        int32_t real;
        uint32_t base;
      } u_num_bases;
      u_num_bases.real = this->num_bases;
      *(outbuffer + offset + 0) = (u_num_bases.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_bases.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_bases.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_bases.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_bases);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->demo.deserialize(inbuffer + offset);
      uint8_t k_gains_lengthT = *(inbuffer + offset++);
      if(k_gains_lengthT > k_gains_length)
        this->k_gains = (float*)realloc(this->k_gains, k_gains_lengthT * sizeof(float));
      offset += 3;
      k_gains_length = k_gains_lengthT;
      for( uint8_t i = 0; i < k_gains_length; i++){
      uint32_t * val_st_k_gains = (uint32_t*) &(this->st_k_gains);
      offset += 3;
      *val_st_k_gains = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_k_gains |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_k_gains |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_k_gains |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_k_gains = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_k_gains |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_k_gains !=0)
        *val_st_k_gains |= ((exp_st_k_gains)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_k_gains = -this->st_k_gains;
        memcpy( &(this->k_gains[i]), &(this->st_k_gains), sizeof(float));
      }
      uint8_t d_gains_lengthT = *(inbuffer + offset++);
      if(d_gains_lengthT > d_gains_length)
        this->d_gains = (float*)realloc(this->d_gains, d_gains_lengthT * sizeof(float));
      offset += 3;
      d_gains_length = d_gains_lengthT;
      for( uint8_t i = 0; i < d_gains_length; i++){
      uint32_t * val_st_d_gains = (uint32_t*) &(this->st_d_gains);
      offset += 3;
      *val_st_d_gains = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_d_gains |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_d_gains |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_d_gains |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_d_gains = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_d_gains |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_d_gains !=0)
        *val_st_d_gains |= ((exp_st_d_gains)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_d_gains = -this->st_d_gains;
        memcpy( &(this->d_gains[i]), &(this->st_d_gains), sizeof(float));
      }
      union {
        int32_t real;
        uint32_t base;
      } u_num_bases;
      u_num_bases.base = 0;
      u_num_bases.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_num_bases.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_num_bases.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_num_bases.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->num_bases = u_num_bases.real;
      offset += sizeof(this->num_bases);
     return offset;
    }

    const char * getType(){ return LEARNDMPFROMDEMO; };
    const char * getMD5(){ return "d7c68a7f789c246aea188ade43175b30"; };

  };

  class LearnDMPFromDemoResponse : public ros::Msg
  {
    public:
      uint8_t dmp_list_length;
      dmp::DMPData st_dmp_list;
      dmp::DMPData * dmp_list;
      float tau;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = dmp_list_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < dmp_list_length; i++){
      offset += this->dmp_list[i].serialize(outbuffer + offset);
      }
      int32_t * val_tau = (int32_t *) &(this->tau);
      int32_t exp_tau = (((*val_tau)>>23)&255);
      if(exp_tau != 0)
        exp_tau += 1023-127;
      int32_t sig_tau = *val_tau;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_tau<<5) & 0xff;
      *(outbuffer + offset++) = (sig_tau>>3) & 0xff;
      *(outbuffer + offset++) = (sig_tau>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_tau<<4) & 0xF0) | ((sig_tau>>19)&0x0F);
      *(outbuffer + offset++) = (exp_tau>>4) & 0x7F;
      if(this->tau < 0) *(outbuffer + offset -1) |= 0x80;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t dmp_list_lengthT = *(inbuffer + offset++);
      if(dmp_list_lengthT > dmp_list_length)
        this->dmp_list = (dmp::DMPData*)realloc(this->dmp_list, dmp_list_lengthT * sizeof(dmp::DMPData));
      offset += 3;
      dmp_list_length = dmp_list_lengthT;
      for( uint8_t i = 0; i < dmp_list_length; i++){
      offset += this->st_dmp_list.deserialize(inbuffer + offset);
        memcpy( &(this->dmp_list[i]), &(this->st_dmp_list), sizeof(dmp::DMPData));
      }
      uint32_t * val_tau = (uint32_t*) &(this->tau);
      offset += 3;
      *val_tau = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_tau |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_tau |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_tau |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_tau = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_tau |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_tau !=0)
        *val_tau |= ((exp_tau)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->tau = -this->tau;
     return offset;
    }

    const char * getType(){ return LEARNDMPFROMDEMO; };
    const char * getMD5(){ return "e778e277023cbea0ad639b06f5e88977"; };

  };

  class LearnDMPFromDemo {
    public:
    typedef LearnDMPFromDemoRequest Request;
    typedef LearnDMPFromDemoResponse Response;
  };

}
#endif
