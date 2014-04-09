/* Auto-generated by genmsg_cpp for file /home/diego/fuerte_workspace/sandbox/aibo_server/msg/BumperArray.msg */
#ifndef AIBO_SERVER_MESSAGE_BUMPERARRAY_H
#define AIBO_SERVER_MESSAGE_BUMPERARRAY_H
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

namespace aibo_server
{
template <class ContainerAllocator>
struct BumperArray_ {
  typedef BumperArray_<ContainerAllocator> Type;

  BumperArray_()
  : header()
  , paws()
  {
  }

  BumperArray_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , paws(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _paws_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  paws;


  typedef boost::shared_ptr< ::aibo_server::BumperArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aibo_server::BumperArray_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct BumperArray
typedef  ::aibo_server::BumperArray_<std::allocator<void> > BumperArray;

typedef boost::shared_ptr< ::aibo_server::BumperArray> BumperArrayPtr;
typedef boost::shared_ptr< ::aibo_server::BumperArray const> BumperArrayConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::aibo_server::BumperArray_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::aibo_server::BumperArray_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace aibo_server

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::aibo_server::BumperArray_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::aibo_server::BumperArray_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::aibo_server::BumperArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "13594be0681d59ef9bd83e3e7fb5da59";
  }

  static const char* value(const  ::aibo_server::BumperArray_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x13594be0681d59efULL;
  static const uint64_t static_value2 = 0x9bd83e3e7fb5da59ULL;
};

template<class ContainerAllocator>
struct DataType< ::aibo_server::BumperArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "aibo_server/BumperArray";
  }

  static const char* value(const  ::aibo_server::BumperArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::aibo_server::BumperArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "#ROS header\n\
Header header\n\
\n\
#Whether the bumper is being pressed\n\
float64[] paws\n\
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
";
  }

  static const char* value(const  ::aibo_server::BumperArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::aibo_server::BumperArray_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::aibo_server::BumperArray_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::aibo_server::BumperArray_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.paws);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct BumperArray_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aibo_server::BumperArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::aibo_server::BumperArray_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "paws[]" << std::endl;
    for (size_t i = 0; i < v.paws.size(); ++i)
    {
      s << indent << "  paws[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.paws[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // AIBO_SERVER_MESSAGE_BUMPERARRAY_H

