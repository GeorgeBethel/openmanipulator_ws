// Generated by gencpp from file ur_msgs/SetSpeedSliderFractionResponse.msg
// DO NOT EDIT!


#ifndef UR_MSGS_MESSAGE_SETSPEEDSLIDERFRACTIONRESPONSE_H
#define UR_MSGS_MESSAGE_SETSPEEDSLIDERFRACTIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_msgs
{
template <class ContainerAllocator>
struct SetSpeedSliderFractionResponse_
{
  typedef SetSpeedSliderFractionResponse_<ContainerAllocator> Type;

  SetSpeedSliderFractionResponse_()
    : success(false)  {
    }
  SetSpeedSliderFractionResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetSpeedSliderFractionResponse_

typedef ::ur_msgs::SetSpeedSliderFractionResponse_<std::allocator<void> > SetSpeedSliderFractionResponse;

typedef boost::shared_ptr< ::ur_msgs::SetSpeedSliderFractionResponse > SetSpeedSliderFractionResponsePtr;
typedef boost::shared_ptr< ::ur_msgs::SetSpeedSliderFractionResponse const> SetSpeedSliderFractionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'ur_msgs': ['/home/george/openmanipulator_ws/src/universal_robot/ur_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_msgs/SetSpeedSliderFractionResponse";
  }

  static const char* value(const ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSpeedSliderFractionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_msgs::SetSpeedSliderFractionResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_MSGS_MESSAGE_SETSPEEDSLIDERFRACTIONRESPONSE_H
