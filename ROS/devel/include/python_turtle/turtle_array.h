// Generated by gencpp from file python_turtle/turtle_array.msg
// DO NOT EDIT!


#ifndef PYTHON_TURTLE_MESSAGE_TURTLE_ARRAY_H
#define PYTHON_TURTLE_MESSAGE_TURTLE_ARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <python_turtle/turtle.h>

namespace python_turtle
{
template <class ContainerAllocator>
struct turtle_array_
{
  typedef turtle_array_<ContainerAllocator> Type;

  turtle_array_()
    : turtles()  {
    }
  turtle_array_(const ContainerAllocator& _alloc)
    : turtles(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::python_turtle::turtle_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::python_turtle::turtle_<ContainerAllocator> >::other >  _turtles_type;
  _turtles_type turtles;





  typedef boost::shared_ptr< ::python_turtle::turtle_array_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::python_turtle::turtle_array_<ContainerAllocator> const> ConstPtr;

}; // struct turtle_array_

typedef ::python_turtle::turtle_array_<std::allocator<void> > turtle_array;

typedef boost::shared_ptr< ::python_turtle::turtle_array > turtle_arrayPtr;
typedef boost::shared_ptr< ::python_turtle::turtle_array const> turtle_arrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::python_turtle::turtle_array_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::python_turtle::turtle_array_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace python_turtle

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'python_turtle': ['/home/iamnotedible/Desktop/RR_turtle_reverse/ROS/src/python_turtle/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::python_turtle::turtle_array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::python_turtle::turtle_array_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::python_turtle::turtle_array_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::python_turtle::turtle_array_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::python_turtle::turtle_array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::python_turtle::turtle_array_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::python_turtle::turtle_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a167676d2b4e0f20402b9b02bac07167";
  }

  static const char* value(const ::python_turtle::turtle_array_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa167676d2b4e0f20ULL;
  static const uint64_t static_value2 = 0x402b9b02bac07167ULL;
};

template<class ContainerAllocator>
struct DataType< ::python_turtle::turtle_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "python_turtle/turtle_array";
  }

  static const char* value(const ::python_turtle::turtle_array_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::python_turtle::turtle_array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtle[] turtles\n"
"================================================================================\n"
"MSG: python_turtle/turtle\n"
"string name\n"
"geometry_msgs/Pose turtle_pose\n"
"string color\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::python_turtle::turtle_array_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::python_turtle::turtle_array_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.turtles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct turtle_array_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::python_turtle::turtle_array_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::python_turtle::turtle_array_<ContainerAllocator>& v)
  {
    s << indent << "turtles[]" << std::endl;
    for (size_t i = 0; i < v.turtles.size(); ++i)
    {
      s << indent << "  turtles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::python_turtle::turtle_<ContainerAllocator> >::stream(s, indent + "    ", v.turtles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PYTHON_TURTLE_MESSAGE_TURTLE_ARRAY_H
