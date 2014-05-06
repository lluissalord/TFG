#ifndef _ROS_package_propi_CoG_data_h
#define _ROS_package_propi_CoG_data_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "package_propi/Position.h"
#include "package_propi/Velocity.h"
#include "ros/time.h"

namespace package_propi
{

  class CoG_data : public ros::Msg
  {
    public:
      std_msgs::Header header;
      package_propi::Position Position;
      package_propi::Velocity Velocity;
      ros::Time Time;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->Position.serialize(outbuffer + offset);
      offset += this->Velocity.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->Time.sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Time.sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->Time.sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->Time.sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->Time.sec);
      *(outbuffer + offset + 0) = (this->Time.nsec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->Time.nsec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->Time.nsec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->Time.nsec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->Time.nsec);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->Position.deserialize(inbuffer + offset);
      offset += this->Velocity.deserialize(inbuffer + offset);
      this->Time.sec =  ((uint32_t) (*(inbuffer + offset)));
      this->Time.sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->Time.sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->Time.sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->Time.sec);
      this->Time.nsec =  ((uint32_t) (*(inbuffer + offset)));
      this->Time.nsec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->Time.nsec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->Time.nsec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->Time.nsec);
     return offset;
    }

    const char * getType(){ return "package_propi/CoG_data"; };
    const char * getMD5(){ return "823beb5cf902ac9aef536c6bc0dd948b"; };

  };

}
#endif