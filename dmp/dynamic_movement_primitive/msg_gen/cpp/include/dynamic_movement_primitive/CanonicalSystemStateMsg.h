/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/CanonicalSystemStateMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_CANONICALSYSTEMSTATEMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_CANONICALSYSTEMSTATEMSG_H
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

#include "dynamic_movement_primitive/StateMsg.h"

namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct CanonicalSystemStateMsg_ {
  typedef CanonicalSystemStateMsg_<ContainerAllocator> Type;

  CanonicalSystemStateMsg_()
  : state()
  , time(0.0)
  {
  }

  CanonicalSystemStateMsg_(const ContainerAllocator& _alloc)
  : state(_alloc)
  , time(0.0)
  {
  }

  typedef  ::dynamic_movement_primitive::StateMsg_<ContainerAllocator>  _state_type;
   ::dynamic_movement_primitive::StateMsg_<ContainerAllocator>  state;

  typedef double _time_type;
  double time;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CanonicalSystemStateMsg
typedef  ::dynamic_movement_primitive::CanonicalSystemStateMsg_<std::allocator<void> > CanonicalSystemStateMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::CanonicalSystemStateMsg> CanonicalSystemStateMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::CanonicalSystemStateMsg const> CanonicalSystemStateMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4d5ada7db67bc2b1869eb6c0d8fec7cd";
  }

  static const char* value(const  ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4d5ada7db67bc2b1ULL;
  static const uint64_t static_value2 = 0x869eb6c0d8fec7cdULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/CanonicalSystemStateMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/StateMsg state\n\
float64 time\n\
================================================================================\n\
MSG: dynamic_movement_primitive/StateMsg\n\
float64 x\n\
float64 xd\n\
float64 xdd\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
    stream.next(m.time);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CanonicalSystemStateMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> & v) 
  {
    s << indent << "state: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::StateMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_CANONICALSYSTEMSTATEMSG_H

