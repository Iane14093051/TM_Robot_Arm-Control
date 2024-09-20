// Generated by gencpp from file autolab_core/RigidTransformListenerResponse.msg
// DO NOT EDIT!


#ifndef AUTOLAB_CORE_MESSAGE_RIGIDTRANSFORMLISTENERRESPONSE_H
#define AUTOLAB_CORE_MESSAGE_RIGIDTRANSFORMLISTENERRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autolab_core
{
template <class ContainerAllocator>
struct RigidTransformListenerResponse_
{
  typedef RigidTransformListenerResponse_<ContainerAllocator> Type;

  RigidTransformListenerResponse_()
    : x_trans(0.0)
    , y_trans(0.0)
    , z_trans(0.0)
    , w_rot(0.0)
    , x_rot(0.0)
    , y_rot(0.0)
    , z_rot(0.0)  {
    }
  RigidTransformListenerResponse_(const ContainerAllocator& _alloc)
    : x_trans(0.0)
    , y_trans(0.0)
    , z_trans(0.0)
    , w_rot(0.0)
    , x_rot(0.0)
    , y_rot(0.0)
    , z_rot(0.0)  {
  (void)_alloc;
    }



   typedef double _x_trans_type;
  _x_trans_type x_trans;

   typedef double _y_trans_type;
  _y_trans_type y_trans;

   typedef double _z_trans_type;
  _z_trans_type z_trans;

   typedef double _w_rot_type;
  _w_rot_type w_rot;

   typedef double _x_rot_type;
  _x_rot_type x_rot;

   typedef double _y_rot_type;
  _y_rot_type y_rot;

   typedef double _z_rot_type;
  _z_rot_type z_rot;





  typedef boost::shared_ptr< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RigidTransformListenerResponse_

typedef ::autolab_core::RigidTransformListenerResponse_<std::allocator<void> > RigidTransformListenerResponse;

typedef boost::shared_ptr< ::autolab_core::RigidTransformListenerResponse > RigidTransformListenerResponsePtr;
typedef boost::shared_ptr< ::autolab_core::RigidTransformListenerResponse const> RigidTransformListenerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator1> & lhs, const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator2> & rhs)
{
  return lhs.x_trans == rhs.x_trans &&
    lhs.y_trans == rhs.y_trans &&
    lhs.z_trans == rhs.z_trans &&
    lhs.w_rot == rhs.w_rot &&
    lhs.x_rot == rhs.x_rot &&
    lhs.y_rot == rhs.y_rot &&
    lhs.z_rot == rhs.z_rot;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator1> & lhs, const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autolab_core

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ec2b9c75e6b2bdb02f5e916c9af6eaf";
  }

  static const char* value(const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ec2b9c75e6b2bdbULL;
  static const uint64_t static_value2 = 0x02f5e916c9af6eafULL;
};

template<class ContainerAllocator>
struct DataType< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autolab_core/RigidTransformListenerResponse";
  }

  static const char* value(const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x_trans\n"
"float64 y_trans\n"
"float64 z_trans\n"
"float64 w_rot\n"
"float64 x_rot\n"
"float64 y_rot\n"
"float64 z_rot\n"
;
  }

  static const char* value(const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x_trans);
      stream.next(m.y_trans);
      stream.next(m.z_trans);
      stream.next(m.w_rot);
      stream.next(m.x_rot);
      stream.next(m.y_rot);
      stream.next(m.z_rot);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RigidTransformListenerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autolab_core::RigidTransformListenerResponse_<ContainerAllocator>& v)
  {
    s << indent << "x_trans: ";
    Printer<double>::stream(s, indent + "  ", v.x_trans);
    s << indent << "y_trans: ";
    Printer<double>::stream(s, indent + "  ", v.y_trans);
    s << indent << "z_trans: ";
    Printer<double>::stream(s, indent + "  ", v.z_trans);
    s << indent << "w_rot: ";
    Printer<double>::stream(s, indent + "  ", v.w_rot);
    s << indent << "x_rot: ";
    Printer<double>::stream(s, indent + "  ", v.x_rot);
    s << indent << "y_rot: ";
    Printer<double>::stream(s, indent + "  ", v.y_rot);
    s << indent << "z_rot: ";
    Printer<double>::stream(s, indent + "  ", v.z_rot);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOLAB_CORE_MESSAGE_RIGIDTRANSFORMLISTENERRESPONSE_H