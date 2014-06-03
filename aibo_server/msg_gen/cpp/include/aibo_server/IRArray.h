/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/aibo_server/msg/IRArray.msg */
#ifndef AIBO_SERVER_MESSAGE_IRARRAY_H
#define AIBO_SERVER_MESSAGE_IRARRAY_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "sensor_msgs/Range.h"

namespace aibo_server
{
template <class ContainerAllocator>
struct IRArray_ {
  typedef IRArray_<ContainerAllocator> Type;

  IRArray_()
  : header()
  , IRs()
  {
  }

  IRArray_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , IRs(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::sensor_msgs::Range_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sensor_msgs::Range_<ContainerAllocator> >::other >  _IRs_type;
  std::vector< ::sensor_msgs::Range_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sensor_msgs::Range_<ContainerAllocator> >::other >  IRs;


  typedef boost::shared_ptr< ::aibo_server::IRArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aibo_server::IRArray_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct IRArray
typedef  ::aibo_server::IRArray_<std::allocator<void> > IRArray;

typedef boost::shared_ptr< ::aibo_server::IRArray> IRArrayPtr;
typedef boost::shared_ptr< ::aibo_server::IRArray const> IRArrayConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::aibo_server::IRArray_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::aibo_server::IRArray_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace aibo_server

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::aibo_server::IRArray_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::aibo_server::IRArray_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::aibo_server::IRArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "08dd08b5a35cb1b60662e4a086cf11e7";
  }

  static const char* value(const  ::aibo_server::IRArray_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x08dd08b5a35cb1b6ULL;
  static const uint64_t static_value2 = 0x0662e4a086cf11e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::aibo_server::IRArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "aibo_server/IRArray";
  }

  static const char* value(const  ::aibo_server::IRArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::aibo_server::IRArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#ROS header\n\
Header header\n\
\n\
#The IR of the Aibo\n\
sensor_msgs/Range[] IRs\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Range\n\
# Single range reading from an active ranger that emits energy and reports\n\
# one range reading that is valid along an arc at the distance measured. \n\
# This message is  not appropriate for laser scanners. See the LaserScan\n\
# message if you are working with a laser scanner.\n\
\n\
# This message also can represent a fixed-distance (binary) ranger.  This\n\
# sensor will have min_range===max_range===distance of detection.\n\
# These sensors follow REP 117 and will output -Inf if the object is detected\n\
# and +Inf if the object is outside of the detection range.\n\
\n\
Header header           # timestamp in the header is the time the ranger\n\
                        # returned the distance reading\n\
\n\
# Radiation type enums\n\
# If you want a value added to this list, send an email to the ros-users list\n\
uint8 ULTRASOUND=0\n\
uint8 INFRARED=1\n\
\n\
uint8 radiation_type    # the type of radiation used by the sensor\n\
                        # (sound, IR, etc) [enum]\n\
\n\
float32 field_of_view   # the size of the arc that the distance reading is\n\
                        # valid for [rad]\n\
                        # the object causing the range reading may have\n\
                        # been anywhere within -field_of_view/2 and\n\
                        # field_of_view/2 at the measured range. \n\
                        # 0 angle corresponds to the x-axis of the sensor.\n\
\n\
float32 min_range       # minimum range value [m]\n\
float32 max_range       # maximum range value [m]\n\
                        # Fixed distance rangers require min_range==max_range\n\
\n\
float32 range           # range data [m]\n\
                        # (Note: values < range_min or > range_max\n\
                        # should be discarded)\n\
                        # Fixed distance rangers only output -Inf or +Inf.\n\
                        # -Inf represents a detection within fixed distance.\n\
                        # (Detection too close to the sensor to quantify)\n\
                        # +Inf represents no detection within the fixed distance.\n\
                        # (Object out of range)\n\
";
  }

  static const char* value(const  ::aibo_server::IRArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::aibo_server::IRArray_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::aibo_server::IRArray_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::aibo_server::IRArray_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.IRs);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct IRArray_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aibo_server::IRArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::aibo_server::IRArray_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "IRs[]" << std::endl;
    for (size_t i = 0; i < v.IRs.size(); ++i)
    {
      s << indent << "  IRs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sensor_msgs::Range_<ContainerAllocator> >::stream(s, indent + "    ", v.IRs[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // AIBO_SERVER_MESSAGE_IRARRAY_H

