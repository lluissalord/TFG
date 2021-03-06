/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/DynamicMovementPrimitiveStateMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DYNAMICMOVEMENTPRIMITIVESTATEMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DYNAMICMOVEMENTPRIMITIVESTATEMSG_H
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

#include "dynamic_movement_primitive/TimeMsg.h"

namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct DynamicMovementPrimitiveStateMsg_ {
  typedef DynamicMovementPrimitiveStateMsg_<ContainerAllocator> Type;

  DynamicMovementPrimitiveStateMsg_()
  : is_learned(false)
  , is_setup(false)
  , is_start_set(false)
  , current_time()
  , num_training_samples(0)
  , num_generated_samples(0)
  , seq(0)
  {
  }

  DynamicMovementPrimitiveStateMsg_(const ContainerAllocator& _alloc)
  : is_learned(false)
  , is_setup(false)
  , is_start_set(false)
  , current_time(_alloc)
  , num_training_samples(0)
  , num_generated_samples(0)
  , seq(0)
  {
  }

  typedef uint8_t _is_learned_type;
  uint8_t is_learned;

  typedef uint8_t _is_setup_type;
  uint8_t is_setup;

  typedef uint8_t _is_start_set_type;
  uint8_t is_start_set;

  typedef  ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator>  _current_time_type;
   ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator>  current_time;

  typedef int32_t _num_training_samples_type;
  int32_t num_training_samples;

  typedef int32_t _num_generated_samples_type;
  int32_t num_generated_samples;

  typedef int32_t _seq_type;
  int32_t seq;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct DynamicMovementPrimitiveStateMsg
typedef  ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<std::allocator<void> > DynamicMovementPrimitiveStateMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg> DynamicMovementPrimitiveStateMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg const> DynamicMovementPrimitiveStateMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ff70d60cb2445b7eba523337d26ec715";
  }

  static const char* value(const  ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xff70d60cb2445b7eULL;
  static const uint64_t static_value2 = 0xba523337d26ec715ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool is_learned\n\
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
";
  }

  static const char* value(const  ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.is_learned);
    stream.next(m.is_setup);
    stream.next(m.is_start_set);
    stream.next(m.current_time);
    stream.next(m.num_training_samples);
    stream.next(m.num_generated_samples);
    stream.next(m.seq);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DynamicMovementPrimitiveStateMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::DynamicMovementPrimitiveStateMsg_<ContainerAllocator> & v) 
  {
    s << indent << "is_learned: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_learned);
    s << indent << "is_setup: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_setup);
    s << indent << "is_start_set: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_start_set);
    s << indent << "current_time: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::TimeMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.current_time);
    s << indent << "num_training_samples: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_training_samples);
    s << indent << "num_generated_samples: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_generated_samples);
    s << indent << "seq: ";
    Printer<int32_t>::stream(s, indent + "  ", v.seq);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DYNAMICMOVEMENTPRIMITIVESTATEMSG_H

