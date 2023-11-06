// Generated by gencpp from file contactile_gripper/Float32List.msg
// DO NOT EDIT!


#ifndef CONTACTILE_GRIPPER_MESSAGE_FLOAT32LIST_H
#define CONTACTILE_GRIPPER_MESSAGE_FLOAT32LIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace contactile_gripper
{
template <class ContainerAllocator>
struct Float32List_
{
  typedef Float32List_<ContainerAllocator> Type;

  Float32List_()
    : list()  {
    }
  Float32List_(const ContainerAllocator& _alloc)
    : list(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _list_type;
  _list_type list;





  typedef boost::shared_ptr< ::contactile_gripper::Float32List_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::contactile_gripper::Float32List_<ContainerAllocator> const> ConstPtr;

}; // struct Float32List_

typedef ::contactile_gripper::Float32List_<std::allocator<void> > Float32List;

typedef boost::shared_ptr< ::contactile_gripper::Float32List > Float32ListPtr;
typedef boost::shared_ptr< ::contactile_gripper::Float32List const> Float32ListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::contactile_gripper::Float32List_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::contactile_gripper::Float32List_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::contactile_gripper::Float32List_<ContainerAllocator1> & lhs, const ::contactile_gripper::Float32List_<ContainerAllocator2> & rhs)
{
  return lhs.list == rhs.list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::contactile_gripper::Float32List_<ContainerAllocator1> & lhs, const ::contactile_gripper::Float32List_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace contactile_gripper

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::contactile_gripper::Float32List_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::contactile_gripper::Float32List_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::contactile_gripper::Float32List_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::contactile_gripper::Float32List_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::contactile_gripper::Float32List_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::contactile_gripper::Float32List_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::contactile_gripper::Float32List_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f899bbf34605ab8c1065aaee8c9708ca";
  }

  static const char* value(const ::contactile_gripper::Float32List_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf899bbf34605ab8cULL;
  static const uint64_t static_value2 = 0x1065aaee8c9708caULL;
};

template<class ContainerAllocator>
struct DataType< ::contactile_gripper::Float32List_<ContainerAllocator> >
{
  static const char* value()
  {
    return "contactile_gripper/Float32List";
  }

  static const char* value(const ::contactile_gripper::Float32List_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::contactile_gripper::Float32List_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] list\n"
;
  }

  static const char* value(const ::contactile_gripper::Float32List_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::contactile_gripper::Float32List_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Float32List_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::contactile_gripper::Float32List_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::contactile_gripper::Float32List_<ContainerAllocator>& v)
  {
    s << indent << "list[]" << std::endl;
    for (size_t i = 0; i < v.list.size(); ++i)
    {
      s << indent << "  list[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTACTILE_GRIPPER_MESSAGE_FLOAT32LIST_H
