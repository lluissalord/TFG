/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/ICRA2009DynamicMovementPrimitiveMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_ICRA2009DYNAMICMOVEMENTPRIMITIVEMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_ICRA2009DYNAMICMOVEMENTPRIMITIVEMSG_H
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

#include "dynamic_movement_primitive/DynamicMovementPrimitiveMsg.h"
#include "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg.h"
#include "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg.h"
#include "dynamic_movement_primitive/ICRA2009TransformationSystemMsg.h"
#include "dynamic_movement_primitive/ICRA2009CanonicalSystemMsg.h"

namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct ICRA2009DynamicMovementPrimitiveMsg_ {
  typedef ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> Type;

  ICRA2009DynamicMovementPrimitiveMsg_()
  : dmp()
  , state()
  , parameters()
  , transformation_systems()
  , canonical_system()
  {
  }

  ICRA2009DynamicMovementPrimitiveMsg_(const ContainerAllocator& _alloc)
  : dmp(_alloc)
  , state(_alloc)
  , parameters(_alloc)
  , transformation_systems(_alloc)
  , canonical_system(_alloc)
  {
  }

  typedef  ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator>  _dmp_type;
   ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator>  dmp;

  typedef  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveStateMsg_<ContainerAllocator>  _state_type;
   ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveStateMsg_<ContainerAllocator>  state;

  typedef  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveParametersMsg_<ContainerAllocator>  _parameters_type;
   ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveParametersMsg_<ContainerAllocator>  parameters;

  typedef std::vector< ::dynamic_movement_primitive::ICRA2009TransformationSystemMsg_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dynamic_movement_primitive::ICRA2009TransformationSystemMsg_<ContainerAllocator> >::other >  _transformation_systems_type;
  std::vector< ::dynamic_movement_primitive::ICRA2009TransformationSystemMsg_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dynamic_movement_primitive::ICRA2009TransformationSystemMsg_<ContainerAllocator> >::other >  transformation_systems;

  typedef  ::dynamic_movement_primitive::ICRA2009CanonicalSystemMsg_<ContainerAllocator>  _canonical_system_type;
   ::dynamic_movement_primitive::ICRA2009CanonicalSystemMsg_<ContainerAllocator>  canonical_system;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ICRA2009DynamicMovementPrimitiveMsg
typedef  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<std::allocator<void> > ICRA2009DynamicMovementPrimitiveMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg> ICRA2009DynamicMovementPrimitiveMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg const> ICRA2009DynamicMovementPrimitiveMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1c750ea21fb7c4573eda84873df00917";
  }

  static const char* value(const  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1c750ea21fb7c457ULL;
  static const uint64_t static_value2 = 0x3eda84873df00917ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp\n\
dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg state\n\
dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg parameters\n\
dynamic_movement_primitive/ICRA2009TransformationSystemMsg[] transformation_systems\n\
dynamic_movement_primitive/ICRA2009CanonicalSystemMsg canonical_system\n\
================================================================================\n\
MSG: dynamic_movement_primitive/DynamicMovementPrimitiveMsg\n\
dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state\n\
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
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg\n\
\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009TransformationSystemMsg\n\
dynamic_movement_primitive/TransformationSystemMsg transformation_system\n\
dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg[] states\n\
dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg[] parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/TransformationSystemMsg\n\
dynamic_movement_primitive/TransformationSystemStateMsg[] states\n\
dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters\n\
int32 integration_method\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/TransformationSystemStateMsg\n\
dynamic_movement_primitive/StateMsg internal\n\
dynamic_movement_primitive/StateMsg target\n\
dynamic_movement_primitive/StateMsg current\n\
\n\
float64 start\n\
float64 goal\n\
\n\
float64 f\n\
float64 ft\n\
\n\
# float64[] function_input\n\
# float64[] function_target\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/StateMsg\n\
float64 x\n\
float64 xd\n\
float64 xdd\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/TransformationSystemParametersMsg\n\
float64 initial_start\n\
float64 initial_goal\n\
\n\
string name\n\
\n\
locally_weighted_regression/Model lwr_model\n\
================================================================================\n\
MSG: locally_weighted_regression/Model\n\
int32 num_rfs\n\
bool use_offsets\n\
float64[] widths\n\
float64[] centers\n\
float64[] slopes\n\
float64[] offsets\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg\n\
float64 k_gain\n\
float64 d_gain\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemMsg\n\
dynamic_movement_primitive/CanonicalSystemMsg canonical_system\n\
dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg state\n\
dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg parameters\n\
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
MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg\n\
float64 alpha_x\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg\n\
\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.dmp);
    stream.next(m.state);
    stream.next(m.parameters);
    stream.next(m.transformation_systems);
    stream.next(m.canonical_system);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ICRA2009DynamicMovementPrimitiveMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> & v) 
  {
    s << indent << "dmp: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::DynamicMovementPrimitiveMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.dmp);
    s << indent << "state: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveStateMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
    s << indent << "parameters: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveParametersMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.parameters);
    s << indent << "transformation_systems[]" << std::endl;
    for (size_t i = 0; i < v.transformation_systems.size(); ++i)
    {
      s << indent << "  transformation_systems[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_movement_primitive::ICRA2009TransformationSystemMsg_<ContainerAllocator> >::stream(s, indent + "    ", v.transformation_systems[i]);
    }
    s << indent << "canonical_system: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::ICRA2009CanonicalSystemMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.canonical_system);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_ICRA2009DYNAMICMOVEMENTPRIMITIVEMSG_H

