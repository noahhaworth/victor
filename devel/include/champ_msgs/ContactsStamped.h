// Generated by gencpp from file champ_msgs/ContactsStamped.msg
// DO NOT EDIT!


#ifndef CHAMP_MSGS_MESSAGE_CONTACTSSTAMPED_H
#define CHAMP_MSGS_MESSAGE_CONTACTSSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace champ_msgs
{
template <class ContainerAllocator>
struct ContactsStamped_
{
  typedef ContactsStamped_<ContainerAllocator> Type;

  ContactsStamped_()
    : header()
    , contacts()  {
    }
  ContactsStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , contacts(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _contacts_type;
  _contacts_type contacts;





  typedef boost::shared_ptr< ::champ_msgs::ContactsStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::champ_msgs::ContactsStamped_<ContainerAllocator> const> ConstPtr;

}; // struct ContactsStamped_

typedef ::champ_msgs::ContactsStamped_<std::allocator<void> > ContactsStamped;

typedef boost::shared_ptr< ::champ_msgs::ContactsStamped > ContactsStampedPtr;
typedef boost::shared_ptr< ::champ_msgs::ContactsStamped const> ContactsStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::champ_msgs::ContactsStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::champ_msgs::ContactsStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::champ_msgs::ContactsStamped_<ContainerAllocator1> & lhs, const ::champ_msgs::ContactsStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.contacts == rhs.contacts;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::champ_msgs::ContactsStamped_<ContainerAllocator1> & lhs, const ::champ_msgs::ContactsStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace champ_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::champ_msgs::ContactsStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::champ_msgs::ContactsStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::champ_msgs::ContactsStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::champ_msgs::ContactsStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::champ_msgs::ContactsStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::champ_msgs::ContactsStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::champ_msgs::ContactsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a7d3590ac946fc3ce244acb4604e039";
  }

  static const char* value(const ::champ_msgs::ContactsStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a7d3590ac946fc3ULL;
  static const uint64_t static_value2 = 0xce244acb4604e039ULL;
};

template<class ContainerAllocator>
struct DataType< ::champ_msgs::ContactsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "champ_msgs/ContactsStamped";
  }

  static const char* value(const ::champ_msgs::ContactsStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::champ_msgs::ContactsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"bool[] contacts\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::champ_msgs::ContactsStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::champ_msgs::ContactsStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.contacts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ContactsStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::champ_msgs::ContactsStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::champ_msgs::ContactsStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "contacts[]" << std::endl;
    for (size_t i = 0; i < v.contacts.size(); ++i)
    {
      s << indent << "  contacts[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.contacts[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHAMP_MSGS_MESSAGE_CONTACTSSTAMPED_H
