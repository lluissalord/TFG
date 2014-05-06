/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/DynamicMovementPrimitiveMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DYNAMICMOVEMENTPRIMITIVEMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DYNAMICMOVEMENTPRIMITIVEMSG_H
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

#include "dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg.h"
#include "dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg.h"

namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct DynamicMovementPrimitiveMsg_ {
  typedef DynamicMovementPrimitiveMsg_<ContainerAllocator> Type;

  DynamicMovementPrimitiveMsg_()
  : state()
  , parameters()
  {
  }

  DynamicMovementPrimitiveMsg_(const ContainerAllocator& _alloc)
  : state(_alloc)
  , parameters(_alloc)
  {
  }

  typedef  ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator>  _state_type;
   ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator>  state;

  typedef  ::dynamic_movement_primitive::DynamicMovementPrimitiveParametersMsg_<ContainerAllocator>  _parameters_type;
   ::dynamic_movement_primitive::DynamicMovementPrimitiveParametersMsg_<ContainerAllocator>  parameters;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct DynamicMovementPrimitiveMsg
typedef  ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<std::allocator<void> > DynamicMovementPrimitiveMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg> DynamicMovementPrimitiveMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg const> DynamicMovementPrimitiveMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e9c0198c49e0197d90520f69fba523ac";
  }

  static const char* value(const  ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe9c0198c49e0197dULL;
  static const uint64_t static_value2 = 0x90520f69fba523acULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/DynamicMovementPrimitiveMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state\n\
dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg\n\
bool is_learned\n\
bool is_setup\n\
bool is_start_set\n\
dynamic_movement_primitive/TimeMsg current_time\n\
int32 num_training_samples\n\
int32 num_generated_samples\n\
int32 seq\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/TimeMsg\n\
float64 delta_t\n\
float64 tau\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg\n\
dynamic_movement_primitive/TimeMsg initial_time\n\
float64 teaching_duration\n\
float64 execution_duration\n\
float64 cutoff\n\
int32 type\n\
int32 id\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
    stream.next(m.parameters);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DynamicMovementPrimitiveMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> & v) 
  {
    s << indent << "state: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
    s << indent << "parameters: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::DynamicMovementPrimitiveParametersMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.parameters);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DYNAMICMOVEMENTPRIMITIVEMSG_H

