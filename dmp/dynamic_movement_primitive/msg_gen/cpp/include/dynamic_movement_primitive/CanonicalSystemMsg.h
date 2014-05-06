/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/CanonicalSystemMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_CANONICALSYSTEMMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_CANONICALSYSTEMMSG_H
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

#include "dynamic_movement_primitive/CanonicalSystemStateMsg.h"
#include "dynamic_movement_primitive/CanonicalSystemParametersMsg.h"

namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct CanonicalSystemMsg_ {
  typedef CanonicalSystemMsg_<ContainerAllocator> Type;

  CanonicalSystemMsg_()
  : state()
  , parameters()
  {
  }

  CanonicalSystemMsg_(const ContainerAllocator& _alloc)
  : state(_alloc)
  , parameters(_alloc)
  {
  }

  typedef  ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator>  _state_type;
   ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator>  state;

  typedef  ::dynamic_movement_primitive::CanonicalSystemParametersMsg_<ContainerAllocator>  _parameters_type;
   ::dynamic_movement_primitive::CanonicalSystemParametersMsg_<ContainerAllocator>  parameters;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CanonicalSystemMsg
typedef  ::dynamic_movement_primitive::CanonicalSystemMsg_<std::allocator<void> > CanonicalSystemMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::CanonicalSystemMsg> CanonicalSystemMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::CanonicalSystemMsg const> CanonicalSystemMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eee5dd56b43c4dfddaacb3ddf10b6afb";
  }

  static const char* value(const  ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xeee5dd56b43c4dfdULL;
  static const uint64_t static_value2 = 0xdaacb3ddf10b6afbULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/CanonicalSystemMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/CanonicalSystemStateMsg state\n\
dynamic_movement_primitive/CanonicalSystemParametersMsg parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/CanonicalSystemStateMsg\n\
dynamic_movement_primitive/StateMsg state\n\
float64 time\n\
================================================================================\n\
MSG: dynamic_movement_primitive/StateMsg\n\
float64 x\n\
float64 xd\n\
float64 xdd\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg\n\
float64 alpha_x\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
    stream.next(m.parameters);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CanonicalSystemMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> & v) 
  {
    s << indent << "state: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::CanonicalSystemStateMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
    s << indent << "parameters: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::CanonicalSystemParametersMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.parameters);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_CANONICALSYSTEMMSG_H

