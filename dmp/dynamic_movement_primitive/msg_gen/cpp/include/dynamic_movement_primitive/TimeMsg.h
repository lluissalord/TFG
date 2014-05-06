/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/TimeMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_TIMEMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_TIMEMSG_H
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


namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct TimeMsg_ {
  typedef TimeMsg_<ContainerAllocator> Type;

  TimeMsg_()
  : delta_t(0.0)
  , tau(0.0)
  {
  }

  TimeMsg_(const ContainerAllocator& _alloc)
  : delta_t(0.0)
  , tau(0.0)
  {
  }

  typedef double _delta_t_type;
  double delta_t;

  typedef double _tau_type;
  double tau;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TimeMsg
typedef  ::dynamic_movement_primitive::TimeMsg_<std::allocator<void> > TimeMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::TimeMsg> TimeMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::TimeMsg const> TimeMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d0c165b9f99767f2c4715b0aa4b5e215";
  }

  static const char* value(const  ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd0c165b9f99767f2ULL;
  static const uint64_t static_value2 = 0xc4715b0aa4b5e215ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/TimeMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 delta_t\n\
float64 tau\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.delta_t);
    stream.next(m.tau);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TimeMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> & v) 
  {
    s << indent << "delta_t: ";
    Printer<double>::stream(s, indent + "  ", v.delta_t);
    s << indent << "tau: ";
    Printer<double>::stream(s, indent + "  ", v.tau);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_TIMEMSG_H

