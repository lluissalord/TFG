#ifndef _ROS_dmp_DMPPoint_h
#define _ROS_dmp_DMPPoint_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dmp
{

  class DMPPoint : public ros::Msg
  {
    public:
      uint8_t positions_length;
      float st_positions;
      float * positions;
      uint8_t velocities_length;
      float st_velocities;
      float * velocities;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = positions_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < positions_length; i++){
      int32_t * val_positionsi = (int32_t *) &(this->positions[i]);
      int32_t exp_positionsi = (((*val_positionsi)>>23)&255);
      if(exp_positionsi != 0)
        exp_positionsi += 1023-127;
      int32_t sig_positionsi = *val_positionsi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_positionsi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_positionsi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_positionsi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_positionsi<<4) & 0xF0) | ((sig_positionsi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_positionsi>>4) & 0x7F;
      if(this->positions[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      *(outbuffer + offset++) = velocities_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < velocities_length; i++){
      int32_t * val_velocitiesi = (int32_t *) &(this->velocities[i]);
      int32_t exp_velocitiesi = (((*val_velocitiesi)>>23)&255);
      if(exp_velocitiesi != 0)
        exp_velocitiesi += 1023-127;
      int32_t sig_velocitiesi = *val_velocitiesi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_velocitiesi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_velocitiesi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_velocitiesi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_velocitiesi<<4) & 0xF0) | ((sig_velocitiesi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_velocitiesi>>4) & 0x7F;
      if(this->velocities[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t positions_lengthT = *(inbuffer + offset++);
      if(positions_lengthT > positions_length)
        this->positions = (float*)realloc(this->positions, positions_lengthT * sizeof(float));
      offset += 3;
      positions_length = positions_lengthT;
      for( uint8_t i = 0; i < positions_length; i++){
      uint32_t * val_st_positions = (uint32_t*) &(this->st_positions);
      offset += 3;
      *val_st_positions = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_positions |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_positions |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_positions |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_positions = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_positions |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_positions !=0)
        *val_st_positions |= ((exp_st_positions)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_positions = -this->st_positions;
        memcpy( &(this->positions[i]), &(this->st_positions), sizeof(float));
      }
      uint8_t velocities_lengthT = *(inbuffer + offset++);
      if(velocities_lengthT > velocities_length)
        this->velocities = (float*)realloc(this->velocities, velocities_lengthT * sizeof(float));
      offset += 3;
      velocities_length = velocities_lengthT;
      for( uint8_t i = 0; i < velocities_length; i++){
      uint32_t * val_st_velocities = (uint32_t*) &(this->st_velocities);
      offset += 3;
      *val_st_velocities = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_velocities |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_velocities |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_velocities |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_velocities = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_velocities |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_velocities !=0)
        *val_st_velocities |= ((exp_st_velocities)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_velocities = -this->st_velocities;
        memcpy( &(this->velocities[i]), &(this->st_velocities), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "dmp/DMPPoint"; };
    const char * getMD5(){ return "f32a98450510f8ae05fae28f45d6e99a"; };

  };

}
#endif