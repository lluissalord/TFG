#ifndef _ROS_SERVICE_GetDMPPlan_h
#define _ROS_SERVICE_GetDMPPlan_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "dmp/DMPTraj.h"

namespace dmp
{

static const char GETDMPPLAN[] = "dmp/GetDMPPlan";

  class GetDMPPlanRequest : public ros::Msg
  {
    public:
      uint8_t x_0_length;
      float st_x_0;
      float * x_0;
      uint8_t x_dot_0_length;
      float st_x_dot_0;
      float * x_dot_0;
      float t_0;
      uint8_t goal_length;
      float st_goal;
      float * goal;
      uint8_t goal_thresh_length;
      float st_goal_thresh;
      float * goal_thresh;
      float seg_length;
      float tau;
      float dt;
      int32_t integrate_iter;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = x_0_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < x_0_length; i++){
      int32_t * val_x_0i = (int32_t *) &(this->x_0[i]);
      int32_t exp_x_0i = (((*val_x_0i)>>23)&255);
      if(exp_x_0i != 0)
        exp_x_0i += 1023-127;
      int32_t sig_x_0i = *val_x_0i;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_x_0i<<5) & 0xff;
      *(outbuffer + offset++) = (sig_x_0i>>3) & 0xff;
      *(outbuffer + offset++) = (sig_x_0i>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_x_0i<<4) & 0xF0) | ((sig_x_0i>>19)&0x0F);
      *(outbuffer + offset++) = (exp_x_0i>>4) & 0x7F;
      if(this->x_0[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      *(outbuffer + offset++) = x_dot_0_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < x_dot_0_length; i++){
      int32_t * val_x_dot_0i = (int32_t *) &(this->x_dot_0[i]);
      int32_t exp_x_dot_0i = (((*val_x_dot_0i)>>23)&255);
      if(exp_x_dot_0i != 0)
        exp_x_dot_0i += 1023-127;
      int32_t sig_x_dot_0i = *val_x_dot_0i;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_x_dot_0i<<5) & 0xff;
      *(outbuffer + offset++) = (sig_x_dot_0i>>3) & 0xff;
      *(outbuffer + offset++) = (sig_x_dot_0i>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_x_dot_0i<<4) & 0xF0) | ((sig_x_dot_0i>>19)&0x0F);
      *(outbuffer + offset++) = (exp_x_dot_0i>>4) & 0x7F;
      if(this->x_dot_0[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      int32_t * val_t_0 = (int32_t *) &(this->t_0);
      int32_t exp_t_0 = (((*val_t_0)>>23)&255);
      if(exp_t_0 != 0)
        exp_t_0 += 1023-127;
      int32_t sig_t_0 = *val_t_0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_t_0<<5) & 0xff;
      *(outbuffer + offset++) = (sig_t_0>>3) & 0xff;
      *(outbuffer + offset++) = (sig_t_0>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_t_0<<4) & 0xF0) | ((sig_t_0>>19)&0x0F);
      *(outbuffer + offset++) = (exp_t_0>>4) & 0x7F;
      if(this->t_0 < 0) *(outbuffer + offset -1) |= 0x80;
      *(outbuffer + offset++) = goal_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < goal_length; i++){
      int32_t * val_goali = (int32_t *) &(this->goal[i]);
      int32_t exp_goali = (((*val_goali)>>23)&255);
      if(exp_goali != 0)
        exp_goali += 1023-127;
      int32_t sig_goali = *val_goali;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_goali<<5) & 0xff;
      *(outbuffer + offset++) = (sig_goali>>3) & 0xff;
      *(outbuffer + offset++) = (sig_goali>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_goali<<4) & 0xF0) | ((sig_goali>>19)&0x0F);
      *(outbuffer + offset++) = (exp_goali>>4) & 0x7F;
      if(this->goal[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      *(outbuffer + offset++) = goal_thresh_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < goal_thresh_length; i++){
      int32_t * val_goal_threshi = (int32_t *) &(this->goal_thresh[i]);
      int32_t exp_goal_threshi = (((*val_goal_threshi)>>23)&255);
      if(exp_goal_threshi != 0)
        exp_goal_threshi += 1023-127;
      int32_t sig_goal_threshi = *val_goal_threshi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_goal_threshi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_goal_threshi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_goal_threshi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_goal_threshi<<4) & 0xF0) | ((sig_goal_threshi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_goal_threshi>>4) & 0x7F;
      if(this->goal_thresh[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      int32_t * val_seg_length = (int32_t *) &(this->seg_length);
      int32_t exp_seg_length = (((*val_seg_length)>>23)&255);
      if(exp_seg_length != 0)
        exp_seg_length += 1023-127;
      int32_t sig_seg_length = *val_seg_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_seg_length<<5) & 0xff;
      *(outbuffer + offset++) = (sig_seg_length>>3) & 0xff;
      *(outbuffer + offset++) = (sig_seg_length>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_seg_length<<4) & 0xF0) | ((sig_seg_length>>19)&0x0F);
      *(outbuffer + offset++) = (exp_seg_length>>4) & 0x7F;
      if(this->seg_length < 0) *(outbuffer + offset -1) |= 0x80;
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
      int32_t * val_dt = (int32_t *) &(this->dt);
      int32_t exp_dt = (((*val_dt)>>23)&255);
      if(exp_dt != 0)
        exp_dt += 1023-127;
      int32_t sig_dt = *val_dt;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_dt<<5) & 0xff;
      *(outbuffer + offset++) = (sig_dt>>3) & 0xff;
      *(outbuffer + offset++) = (sig_dt>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_dt<<4) & 0xF0) | ((sig_dt>>19)&0x0F);
      *(outbuffer + offset++) = (exp_dt>>4) & 0x7F;
      if(this->dt < 0) *(outbuffer + offset -1) |= 0x80;
      union {
        int32_t real;
        uint32_t base;
      } u_integrate_iter;
      u_integrate_iter.real = this->integrate_iter;
      *(outbuffer + offset + 0) = (u_integrate_iter.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_integrate_iter.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_integrate_iter.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_integrate_iter.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->integrate_iter);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t x_0_lengthT = *(inbuffer + offset++);
      if(x_0_lengthT > x_0_length)
        this->x_0 = (float*)realloc(this->x_0, x_0_lengthT * sizeof(float));
      offset += 3;
      x_0_length = x_0_lengthT;
      for( uint8_t i = 0; i < x_0_length; i++){
      uint32_t * val_st_x_0 = (uint32_t*) &(this->st_x_0);
      offset += 3;
      *val_st_x_0 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_x_0 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_x_0 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_x_0 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_x_0 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_x_0 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_x_0 !=0)
        *val_st_x_0 |= ((exp_st_x_0)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_x_0 = -this->st_x_0;
        memcpy( &(this->x_0[i]), &(this->st_x_0), sizeof(float));
      }
      uint8_t x_dot_0_lengthT = *(inbuffer + offset++);
      if(x_dot_0_lengthT > x_dot_0_length)
        this->x_dot_0 = (float*)realloc(this->x_dot_0, x_dot_0_lengthT * sizeof(float));
      offset += 3;
      x_dot_0_length = x_dot_0_lengthT;
      for( uint8_t i = 0; i < x_dot_0_length; i++){
      uint32_t * val_st_x_dot_0 = (uint32_t*) &(this->st_x_dot_0);
      offset += 3;
      *val_st_x_dot_0 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_x_dot_0 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_x_dot_0 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_x_dot_0 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_x_dot_0 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_x_dot_0 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_x_dot_0 !=0)
        *val_st_x_dot_0 |= ((exp_st_x_dot_0)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_x_dot_0 = -this->st_x_dot_0;
        memcpy( &(this->x_dot_0[i]), &(this->st_x_dot_0), sizeof(float));
      }
      uint32_t * val_t_0 = (uint32_t*) &(this->t_0);
      offset += 3;
      *val_t_0 = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_t_0 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_t_0 |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_t_0 |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_t_0 = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_t_0 |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_t_0 !=0)
        *val_t_0 |= ((exp_t_0)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->t_0 = -this->t_0;
      uint8_t goal_lengthT = *(inbuffer + offset++);
      if(goal_lengthT > goal_length)
        this->goal = (float*)realloc(this->goal, goal_lengthT * sizeof(float));
      offset += 3;
      goal_length = goal_lengthT;
      for( uint8_t i = 0; i < goal_length; i++){
      uint32_t * val_st_goal = (uint32_t*) &(this->st_goal);
      offset += 3;
      *val_st_goal = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_goal |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_goal |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_goal |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_goal = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_goal |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_goal !=0)
        *val_st_goal |= ((exp_st_goal)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_goal = -this->st_goal;
        memcpy( &(this->goal[i]), &(this->st_goal), sizeof(float));
      }
      uint8_t goal_thresh_lengthT = *(inbuffer + offset++);
      if(goal_thresh_lengthT > goal_thresh_length)
        this->goal_thresh = (float*)realloc(this->goal_thresh, goal_thresh_lengthT * sizeof(float));
      offset += 3;
      goal_thresh_length = goal_thresh_lengthT;
      for( uint8_t i = 0; i < goal_thresh_length; i++){
      uint32_t * val_st_goal_thresh = (uint32_t*) &(this->st_goal_thresh);
      offset += 3;
      *val_st_goal_thresh = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_goal_thresh |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_goal_thresh |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_goal_thresh |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_goal_thresh = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_goal_thresh |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_goal_thresh !=0)
        *val_st_goal_thresh |= ((exp_st_goal_thresh)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_goal_thresh = -this->st_goal_thresh;
        memcpy( &(this->goal_thresh[i]), &(this->st_goal_thresh), sizeof(float));
      }
      uint32_t * val_seg_length = (uint32_t*) &(this->seg_length);
      offset += 3;
      *val_seg_length = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_seg_length |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_seg_length |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_seg_length |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_seg_length = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_seg_length |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_seg_length !=0)
        *val_seg_length |= ((exp_seg_length)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->seg_length = -this->seg_length;
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
      uint32_t * val_dt = (uint32_t*) &(this->dt);
      offset += 3;
      *val_dt = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_dt |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_dt |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_dt |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_dt = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_dt |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_dt !=0)
        *val_dt |= ((exp_dt)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->dt = -this->dt;
      union {
        int32_t real;
        uint32_t base;
      } u_integrate_iter;
      u_integrate_iter.base = 0;
      u_integrate_iter.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_integrate_iter.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_integrate_iter.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_integrate_iter.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->integrate_iter = u_integrate_iter.real;
      offset += sizeof(this->integrate_iter);
     return offset;
    }

    const char * getType(){ return GETDMPPLAN; };
    const char * getMD5(){ return "bae6b051e2f7b80225be1fd25b5b705a"; };

  };

  class GetDMPPlanResponse : public ros::Msg
  {
    public:
      dmp::DMPTraj plan;
      uint8_t at_goal;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->plan.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->at_goal >> (8 * 0)) & 0xFF;
      offset += sizeof(this->at_goal);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->plan.deserialize(inbuffer + offset);
      this->at_goal =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->at_goal);
     return offset;
    }

    const char * getType(){ return GETDMPPLAN; };
    const char * getMD5(){ return "dcf9f84a71b2617cf4bbc301a97c05cd"; };

  };

  class GetDMPPlan {
    public:
    typedef GetDMPPlanRequest Request;
    typedef GetDMPPlanResponse Response;
  };

}
#endif
