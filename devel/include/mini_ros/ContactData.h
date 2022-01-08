// Generated by gencpp from file mini_ros/ContactData.msg
// DO NOT EDIT!


#ifndef MINI_ROS_MESSAGE_CONTACTDATA_H
#define MINI_ROS_MESSAGE_CONTACTDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mini_ros
{
template <class ContainerAllocator>
struct ContactData_
{
  typedef ContactData_<ContainerAllocator> Type;

  ContactData_()
    : FL(false)
    , FR(false)
    , BL(false)
    , BR(false)  {
    }
  ContactData_(const ContainerAllocator& _alloc)
    : FL(false)
    , FR(false)
    , BL(false)
    , BR(false)  {
  (void)_alloc;
    }



   typedef uint8_t _FL_type;
  _FL_type FL;

   typedef uint8_t _FR_type;
  _FR_type FR;

   typedef uint8_t _BL_type;
  _BL_type BL;

   typedef uint8_t _BR_type;
  _BR_type BR;





  typedef boost::shared_ptr< ::mini_ros::ContactData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mini_ros::ContactData_<ContainerAllocator> const> ConstPtr;

}; // struct ContactData_

typedef ::mini_ros::ContactData_<std::allocator<void> > ContactData;

typedef boost::shared_ptr< ::mini_ros::ContactData > ContactDataPtr;
typedef boost::shared_ptr< ::mini_ros::ContactData const> ContactDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mini_ros::ContactData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mini_ros::ContactData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mini_ros::ContactData_<ContainerAllocator1> & lhs, const ::mini_ros::ContactData_<ContainerAllocator2> & rhs)
{
  return lhs.FL == rhs.FL &&
    lhs.FR == rhs.FR &&
    lhs.BL == rhs.BL &&
    lhs.BR == rhs.BR;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mini_ros::ContactData_<ContainerAllocator1> & lhs, const ::mini_ros::ContactData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mini_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mini_ros::ContactData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mini_ros::ContactData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mini_ros::ContactData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mini_ros::ContactData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mini_ros::ContactData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mini_ros::ContactData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mini_ros::ContactData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e1e8fe4de4334f7698a7f305ee06dce8";
  }

  static const char* value(const ::mini_ros::ContactData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe1e8fe4de4334f76ULL;
  static const uint64_t static_value2 = 0x98a7f305ee06dce8ULL;
};

template<class ContainerAllocator>
struct DataType< ::mini_ros::ContactData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mini_ros/ContactData";
  }

  static const char* value(const ::mini_ros::ContactData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mini_ros::ContactData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool FL\n"
"bool FR\n"
"bool BL\n"
"bool BR\n"
;
  }

  static const char* value(const ::mini_ros::ContactData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mini_ros::ContactData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.FL);
      stream.next(m.FR);
      stream.next(m.BL);
      stream.next(m.BR);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ContactData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mini_ros::ContactData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mini_ros::ContactData_<ContainerAllocator>& v)
  {
    s << indent << "FL: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.FL);
    s << indent << "FR: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.FR);
    s << indent << "BL: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BL);
    s << indent << "BR: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BR);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MINI_ROS_MESSAGE_CONTACTDATA_H
