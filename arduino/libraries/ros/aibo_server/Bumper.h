#ifndef _ROS_aibo_server_Bumper_h
#define _ROS_aibo_server_Bumper_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace aibo_server
{

  class Bumper : public ros::Msg
  {
    public:
      std_msgs::Header header;
      bool is_pressed;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_pressed;
      u_is_pressed.real = this->is_pressed;
      *(outbuffer + offset + 0) = (u_is_pressed.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_pressed);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_pressed;
      u_is_pressed.base = 0;
      u_is_pressed.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_pressed = u_is_pressed.real;
      offset += sizeof(this->is_pressed);
     return offset;
    }

    const char * getType(){ return "aibo_server/Bumper"; };
    const char * getMD5(){ return "7feed261fab09e5d0ce6318f9f9ed4b9"; };

  };

}
#endif