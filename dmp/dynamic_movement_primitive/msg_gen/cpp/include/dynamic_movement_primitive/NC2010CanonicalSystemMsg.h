/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/NC2010CanonicalSystemMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_NC2010CANONICALSYSTEMMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_NC2010CANONICALSYSTEMMSG_H
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

#include "dynamic_movement_primitive/CanonicalSystemMsg.h"
#include "dynamic_movement_primitive/NC2010CanonicalSystemStateMsg.h"
#include "dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg.h"

namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct NC2010CanonicalSystemMsg_ {
  typedef NC2010CanonicalSystemMsg_<ContainerAllocator> Type;

  NC2010CanonicalSystemMsg_()
  : canonical_system()
  , state()
  , parameters()
  {
  }

  NC2010CanonicalSystemMsg_(const ContainerAllocator& _alloc)
  : canonical_system(_alloc)
  , state(_alloc)
  , parameters(_alloc)
  {
  }

  typedef  ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator>  _canonical_system_type;
   ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator>  canonical_system;

  typedef  ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator>  _state_type;
   ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator>  state;

  typedef  ::dynamic_movement_primitive::NC2010CanonicalSystemParametersMsg_<ContainerAllocator>  _parameters_type;
   ::dynamic_movement_primitive::NC2010CanonicalSystemParametersMsg_<ContainerAllocator>  parameters;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct NC2010CanonicalSystemMsg
typedef  ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<std::allocator<void> > NC2010CanonicalSystemMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg> NC2010CanonicalSystemMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg const> NC2010CanonicalSystemMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5c3c8ec3d151c9fbf9fbfff47f690d0f";
  }

  static const char* value(const  ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5c3c8ec3d151c9fbULL;
  static const uint64_t static_value2 = 0xf9fbfff47f690d0fULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/NC2010CanonicalSystemMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/CanonicalSystemMsg canonical_system\n\
dynamic_movement_primitive/NC2010CanonicalSystemStateMsg state\n\
dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/CanonicalSystemMsg\n\
dynamic_movement_primitive/CanonicalSystemStateMsg state\n\
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
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010CanonicalSystemStateMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg\n\
\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.canonical_system);
    stream.next(m.state);
    stream.next(m.parameters);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NC2010CanonicalSystemMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::NC2010CanonicalSystemMsg_<ContainerAllocator> & v) 
  {
    s << indent << "canonical_system: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::CanonicalSystemMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.canonical_system);
    s << indent << "state: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
    s << indent << "parameters: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::NC2010CanonicalSystemParametersMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.parameters);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_NC2010CANONICALSYSTEMMSG_H

