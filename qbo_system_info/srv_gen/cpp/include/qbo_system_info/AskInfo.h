/* Auto-generated by genmsg_cpp for file /home/runji/ros_workspace/src/OpenQbo/qbo_system_info/srv/AskInfo.srv */
#ifndef QBO_SYSTEM_INFO_SERVICE_ASKINFO_H
#define QBO_SYSTEM_INFO_SERVICE_ASKINFO_H
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

#include "ros/service_traits.h"




namespace qbo_system_info
{
template <class ContainerAllocator>
struct AskInfoRequest_ {
  typedef AskInfoRequest_<ContainerAllocator> Type;

  AskInfoRequest_()
  : command()
  {
  }

  AskInfoRequest_(const ContainerAllocator& _alloc)
  : command(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  command;


  typedef boost::shared_ptr< ::qbo_system_info::AskInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_system_info::AskInfoRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AskInfoRequest
typedef  ::qbo_system_info::AskInfoRequest_<std::allocator<void> > AskInfoRequest;

typedef boost::shared_ptr< ::qbo_system_info::AskInfoRequest> AskInfoRequestPtr;
typedef boost::shared_ptr< ::qbo_system_info::AskInfoRequest const> AskInfoRequestConstPtr;



template <class ContainerAllocator>
struct AskInfoResponse_ {
  typedef AskInfoResponse_<ContainerAllocator> Type;

  AskInfoResponse_()
  : info()
  {
  }

  AskInfoResponse_(const ContainerAllocator& _alloc)
  : info(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  info;


  typedef boost::shared_ptr< ::qbo_system_info::AskInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_system_info::AskInfoResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AskInfoResponse
typedef  ::qbo_system_info::AskInfoResponse_<std::allocator<void> > AskInfoResponse;

typedef boost::shared_ptr< ::qbo_system_info::AskInfoResponse> AskInfoResponsePtr;
typedef boost::shared_ptr< ::qbo_system_info::AskInfoResponse const> AskInfoResponseConstPtr;


struct AskInfo
{

typedef AskInfoRequest Request;
typedef AskInfoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct AskInfo
} // namespace qbo_system_info

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::qbo_system_info::AskInfoRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::qbo_system_info::AskInfoRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::qbo_system_info::AskInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const  ::qbo_system_info::AskInfoRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xcba5e21e920a3a2bULL;
  static const uint64_t static_value2 = 0x7b375cb65b64cdeaULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_system_info::AskInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_system_info/AskInfoRequest";
  }

  static const char* value(const  ::qbo_system_info::AskInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::qbo_system_info::AskInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
\n\
string command\n\
\n\
";
  }

  static const char* value(const  ::qbo_system_info::AskInfoRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::qbo_system_info::AskInfoResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::qbo_system_info::AskInfoResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::qbo_system_info::AskInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c10fc26d5cca9a4b9114f5fc5dea9570";
  }

  static const char* value(const  ::qbo_system_info::AskInfoResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc10fc26d5cca9a4bULL;
  static const uint64_t static_value2 = 0x9114f5fc5dea9570ULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_system_info::AskInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_system_info/AskInfoResponse";
  }

  static const char* value(const  ::qbo_system_info::AskInfoResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::qbo_system_info::AskInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string info\n\
\n\
\n\
";
  }

  static const char* value(const  ::qbo_system_info::AskInfoResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::qbo_system_info::AskInfoRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.command);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AskInfoRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::qbo_system_info::AskInfoResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.info);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AskInfoResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<qbo_system_info::AskInfo> {
  static const char* value() 
  {
    return "2114094fd794b6de43079d7511fd7383";
  }

  static const char* value(const qbo_system_info::AskInfo&) { return value(); } 
};

template<>
struct DataType<qbo_system_info::AskInfo> {
  static const char* value() 
  {
    return "qbo_system_info/AskInfo";
  }

  static const char* value(const qbo_system_info::AskInfo&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<qbo_system_info::AskInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2114094fd794b6de43079d7511fd7383";
  }

  static const char* value(const qbo_system_info::AskInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<qbo_system_info::AskInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_system_info/AskInfo";
  }

  static const char* value(const qbo_system_info::AskInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<qbo_system_info::AskInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2114094fd794b6de43079d7511fd7383";
  }

  static const char* value(const qbo_system_info::AskInfoResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<qbo_system_info::AskInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_system_info/AskInfo";
  }

  static const char* value(const qbo_system_info::AskInfoResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // QBO_SYSTEM_INFO_SERVICE_ASKINFO_H
