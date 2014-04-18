#ifndef _ROS_aibo_server_IRArray_h
#define _ROS_aibo_server_IRArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "sensor_msgs/Range.h"

namespace aibo_server
{

  class IRArray : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t IRs_length;
      sensor_msgs::Range st_IRs;
      sensor_msgs::Range * IRs;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = IRs_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < IRs_length; i++){
      offset += this->IRs[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t IRs_lengthT = *(inbuffer + offset++);
      if(IRs_lengthT > IRs_length)
        this->IRs = (sensor_msgs::Range*)realloc(this->IRs, IRs_lengthT * sizeof(sensor_msgs::Range));
      offset += 3;
      IRs_length = IRs_lengthT;
      for( uint8_t i = 0; i < IRs_length; i++){
      offset += this->st_IRs.deserialize(inbuffer + offset);
        memcpy( &(this->IRs[i]), &(this->st_IRs), sizeof(sensor_msgs::Range));
      }
     return offset;
    }

    const char * getType(){ return "aibo_server/IRArray"; };
    const char * getMD5(){ return "08dd08b5a35cb1b60662e4a086cf11e7"; };

  };

}
#endif