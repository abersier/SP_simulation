// Generated by gencpp from file anymal_rsl_recording/StartRecording.msg
// DO NOT EDIT!


#ifndef ANYMAL_RSL_RECORDING_MESSAGE_STARTRECORDING_H
#define ANYMAL_RSL_RECORDING_MESSAGE_STARTRECORDING_H

#include <ros/service_traits.h>


#include <anymal_rsl_recording/StartRecordingRequest.h>
#include <anymal_rsl_recording/StartRecordingResponse.h>


namespace anymal_rsl_recording
{

struct StartRecording
{

typedef StartRecordingRequest Request;
typedef StartRecordingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StartRecording
} // namespace anymal_rsl_recording


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::anymal_rsl_recording::StartRecording > {
  static const char* value()
  {
    return "3301e16c408a17b56303a46aa82c7f9c";
  }

  static const char* value(const ::anymal_rsl_recording::StartRecording&) { return value(); }
};

template<>
struct DataType< ::anymal_rsl_recording::StartRecording > {
  static const char* value()
  {
    return "anymal_rsl_recording/StartRecording";
  }

  static const char* value(const ::anymal_rsl_recording::StartRecording&) { return value(); }
};


// service_traits::MD5Sum< ::anymal_rsl_recording::StartRecordingRequest> should match
// service_traits::MD5Sum< ::anymal_rsl_recording::StartRecording >
template<>
struct MD5Sum< ::anymal_rsl_recording::StartRecordingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::anymal_rsl_recording::StartRecording >::value();
  }
  static const char* value(const ::anymal_rsl_recording::StartRecordingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::anymal_rsl_recording::StartRecordingRequest> should match
// service_traits::DataType< ::anymal_rsl_recording::StartRecording >
template<>
struct DataType< ::anymal_rsl_recording::StartRecordingRequest>
{
  static const char* value()
  {
    return DataType< ::anymal_rsl_recording::StartRecording >::value();
  }
  static const char* value(const ::anymal_rsl_recording::StartRecordingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::anymal_rsl_recording::StartRecordingResponse> should match
// service_traits::MD5Sum< ::anymal_rsl_recording::StartRecording >
template<>
struct MD5Sum< ::anymal_rsl_recording::StartRecordingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::anymal_rsl_recording::StartRecording >::value();
  }
  static const char* value(const ::anymal_rsl_recording::StartRecordingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::anymal_rsl_recording::StartRecordingResponse> should match
// service_traits::DataType< ::anymal_rsl_recording::StartRecording >
template<>
struct DataType< ::anymal_rsl_recording::StartRecordingResponse>
{
  static const char* value()
  {
    return DataType< ::anymal_rsl_recording::StartRecording >::value();
  }
  static const char* value(const ::anymal_rsl_recording::StartRecordingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ANYMAL_RSL_RECORDING_MESSAGE_STARTRECORDING_H
