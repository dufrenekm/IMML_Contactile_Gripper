// Generated by gencpp from file papillarray_ros_v2/BiasRequest.msg
// DO NOT EDIT!


#ifndef PAPILLARRAY_ROS_V2_MESSAGE_BIASREQUEST_H
#define PAPILLARRAY_ROS_V2_MESSAGE_BIASREQUEST_H

#include <ros/service_traits.h>


#include <papillarray_ros_v2/BiasRequestRequest.h>
#include <papillarray_ros_v2/BiasRequestResponse.h>


namespace papillarray_ros_v2
{

struct BiasRequest
{

typedef BiasRequestRequest Request;
typedef BiasRequestResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BiasRequest
} // namespace papillarray_ros_v2


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::papillarray_ros_v2::BiasRequest > {
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::papillarray_ros_v2::BiasRequest&) { return value(); }
};

template<>
struct DataType< ::papillarray_ros_v2::BiasRequest > {
  static const char* value()
  {
    return "papillarray_ros_v2/BiasRequest";
  }

  static const char* value(const ::papillarray_ros_v2::BiasRequest&) { return value(); }
};


// service_traits::MD5Sum< ::papillarray_ros_v2::BiasRequestRequest> should match
// service_traits::MD5Sum< ::papillarray_ros_v2::BiasRequest >
template<>
struct MD5Sum< ::papillarray_ros_v2::BiasRequestRequest>
{
  static const char* value()
  {
    return MD5Sum< ::papillarray_ros_v2::BiasRequest >::value();
  }
  static const char* value(const ::papillarray_ros_v2::BiasRequestRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::papillarray_ros_v2::BiasRequestRequest> should match
// service_traits::DataType< ::papillarray_ros_v2::BiasRequest >
template<>
struct DataType< ::papillarray_ros_v2::BiasRequestRequest>
{
  static const char* value()
  {
    return DataType< ::papillarray_ros_v2::BiasRequest >::value();
  }
  static const char* value(const ::papillarray_ros_v2::BiasRequestRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::papillarray_ros_v2::BiasRequestResponse> should match
// service_traits::MD5Sum< ::papillarray_ros_v2::BiasRequest >
template<>
struct MD5Sum< ::papillarray_ros_v2::BiasRequestResponse>
{
  static const char* value()
  {
    return MD5Sum< ::papillarray_ros_v2::BiasRequest >::value();
  }
  static const char* value(const ::papillarray_ros_v2::BiasRequestResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::papillarray_ros_v2::BiasRequestResponse> should match
// service_traits::DataType< ::papillarray_ros_v2::BiasRequest >
template<>
struct DataType< ::papillarray_ros_v2::BiasRequestResponse>
{
  static const char* value()
  {
    return DataType< ::papillarray_ros_v2::BiasRequest >::value();
  }
  static const char* value(const ::papillarray_ros_v2::BiasRequestResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PAPILLARRAY_ROS_V2_MESSAGE_BIASREQUEST_H
