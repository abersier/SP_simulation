// Generated by gencpp from file anymal_rsl_recording/StopRecordingInternalResponse.msg
// DO NOT EDIT!


#ifndef ANYMAL_RSL_RECORDING_MESSAGE_STOPRECORDINGINTERNALRESPONSE_H
#define ANYMAL_RSL_RECORDING_MESSAGE_STOPRECORDINGINTERNALRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace anymal_rsl_recording
{
template <class ContainerAllocator>
struct StopRecordingInternalResponse_
{
  typedef StopRecordingInternalResponse_<ContainerAllocator> Type;

  StopRecordingInternalResponse_()
    : suc(false)
    , result()
    , message()  {
    }
  StopRecordingInternalResponse_(const ContainerAllocator& _alloc)
    : suc(false)
    , result(_alloc)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _suc_type;
  _suc_type suc;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StopRecordingInternalResponse_

typedef ::anymal_rsl_recording::StopRecordingInternalResponse_<std::allocator<void> > StopRecordingInternalResponse;

typedef boost::shared_ptr< ::anymal_rsl_recording::StopRecordingInternalResponse > StopRecordingInternalResponsePtr;
typedef boost::shared_ptr< ::anymal_rsl_recording::StopRecordingInternalResponse const> StopRecordingInternalResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator1> & lhs, const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator2> & rhs)
{
  return lhs.suc == rhs.suc &&
    lhs.result == rhs.result &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator1> & lhs, const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace anymal_rsl_recording

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb82b3671ed25707fcf1ba78e1d2315b";
  }

  static const char* value(const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb82b3671ed25707ULL;
  static const uint64_t static_value2 = 0xfcf1ba78e1d2315bULL;
};

template<class ContainerAllocator>
struct DataType< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "anymal_rsl_recording/StopRecordingInternalResponse";
  }

  static const char* value(const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool suc\n"
"string result\n"
"string message\n"
;
  }

  static const char* value(const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.suc);
      stream.next(m.result);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StopRecordingInternalResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::anymal_rsl_recording::StopRecordingInternalResponse_<ContainerAllocator>& v)
  {
    s << indent << "suc: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.suc);
    s << indent << "result: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.result);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ANYMAL_RSL_RECORDING_MESSAGE_STOPRECORDINGINTERNALRESPONSE_H
