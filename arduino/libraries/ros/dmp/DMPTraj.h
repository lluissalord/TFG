#ifndef _ROS_dmp_DMPTraj_h
#define _ROS_dmp_DMPTraj_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "dmp/DMPPoint.h"

namespace dmp
{

  class DMPTraj : public ros::Msg
  {
    public:
      uint8_t points_length;
      dmp::DMPPoint st_points;
      dmp::DMPPoint * points;
      uint8_t times_length;
      float st_times;
      float * times;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = points_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < points_length; i++){
      offset += this->points[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset++) = times_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < times_length; i++){
      int32_t * val_timesi = (int32_t *) &(this->times[i]);
      int32_t exp_timesi = (((*val_timesi)>>23)&255);
      if(exp_timesi != 0)
        exp_timesi += 1023-127;
      int32_t sig_timesi = *val_timesi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_timesi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_timesi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_timesi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_timesi<<4) & 0xF0) | ((sig_timesi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_timesi>>4) & 0x7F;
      if(this->times[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t points_lengthT = *(inbuffer + offset++);
      if(points_lengthT > points_length)
        this->points = (dmp::DMPPoint*)realloc(this->points, points_lengthT * sizeof(dmp::DMPPoint));
      offset += 3;
      points_length = points_lengthT;
      for( uint8_t i = 0; i < points_length; i++){
      offset += this->st_points.deserialize(inbuffer + offset);
        memcpy( &(this->points[i]), &(this->st_points), sizeof(dmp::DMPPoint));
      }
      uint8_t times_lengthT = *(inbuffer + offset++);
      if(times_lengthT > times_length)
        this->times = (float*)realloc(this->times, times_lengthT * sizeof(float));
      offset += 3;
      times_length = times_lengthT;
      for( uint8_t i = 0; i < times_length; i++){
      uint32_t * val_st_times = (uint32_t*) &(this->st_times);
      offset += 3;
      *val_st_times = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_times |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_times |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_times |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_times = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_times |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_times !=0)
        *val_st_times |= ((exp_st_times)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_times = -this->st_times;
        memcpy( &(this->times[i]), &(this->st_times), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "dmp/DMPTraj"; };
    const char * getMD5(){ return "1d088d86ab60cf6a2671bc3c0e99932b"; };

  };

}
#endif