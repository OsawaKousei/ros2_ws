// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from custom_test_msgs:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

//TODO (adamdbrw): include depending on what is needed
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ROS2;
using ROS2.Internal;





namespace custom_test_msgs
{
namespace srv
{
// message class
public class AddThreeInts_Request : MessageInternals, Message
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations

  // members
  public long A { get; set; }
  public long B { get; set; }
  public long C { get; set; }

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeGetTypeSupportType();
  private static NativeGetTypeSupportType native_get_typesupport = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeCreateNativeMessageType();
  private static NativeCreateNativeMessageType native_create_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeDestroyNativeMessageType(IntPtr messageHandle);
  private static NativeDestroyNativeMessageType native_destroy_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate long NativeReadFieldAType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldAType(
    IntPtr messageHandle, long value);


  private static NativeReadFieldAType native_read_field_a = null;
  private static NativeWriteFieldAType native_write_field_a = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate long NativeReadFieldBType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldBType(
    IntPtr messageHandle, long value);


  private static NativeReadFieldBType native_read_field_b = null;
  private static NativeWriteFieldBType native_write_field_b = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate long NativeReadFieldCType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldCType(
    IntPtr messageHandle, long value);


  private static NativeReadFieldCType native_read_field_c = null;
  private static NativeWriteFieldCType native_write_field_c = null;

  // This is done to preload before ros2 rmw_implementation attempts to find custom message library (and fails without absolute path)
  static private void MessageTypeSupportPreload()
  {
    if (RuntimeInformation.IsOSPlatform(OSPlatform.Linux))
    { //only affects Linux since on Windows PATH can be set effectively, dynamically
        const string rmw_fastrtps = "rmw_fastrtps_cpp";
        var rmw_implementation = Environment.GetEnvironmentVariable("RMW_IMPLEMENTATION");
        if (rmw_implementation == null)
        {
          var ros_distro = Environment.GetEnvironmentVariable("ROS_DISTRO");
          if (ros_distro == "galactic")
          { // no preloads for CycloneDDS, default for galactic
            return;
          }
          rmw_implementation = rmw_fastrtps; // default for all other distros
        }

        // TODO - generalize to Connext and other implementations
        if (rmw_implementation == rmw_fastrtps)
        { // TODO - get rcl level constants, e.g. rosidl_typesupport_fastrtps_c__identifier
          // Load typesupport for fastrtps (_c depends on _cpp)
          var loadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static AddThreeInts_Request()
  {
    Ros2csLogger logger = Ros2csLogger.GetInstance();

    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("custom_test_msgs_srv_add_three_ints__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_get_type_support");
    AddThreeInts_Request.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_create_native_message");
    AddThreeInts_Request.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_destroy_native_message");
    AddThreeInts_Request.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_read_field_a_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_read_field_a");
    AddThreeInts_Request.native_read_field_a =
      (NativeReadFieldAType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_a_ptr, typeof(NativeReadFieldAType));

    IntPtr native_write_field_a_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_write_field_a");
    AddThreeInts_Request.native_write_field_a =
      (NativeWriteFieldAType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_a_ptr, typeof(NativeWriteFieldAType));
    IntPtr native_read_field_b_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_read_field_b");
    AddThreeInts_Request.native_read_field_b =
      (NativeReadFieldBType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_b_ptr, typeof(NativeReadFieldBType));

    IntPtr native_write_field_b_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_write_field_b");
    AddThreeInts_Request.native_write_field_b =
      (NativeWriteFieldBType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_b_ptr, typeof(NativeWriteFieldBType));
    IntPtr native_read_field_c_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_read_field_c");
    AddThreeInts_Request.native_read_field_c =
      (NativeReadFieldCType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_c_ptr, typeof(NativeReadFieldCType));

    IntPtr native_write_field_c_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Request_native_write_field_c");
    AddThreeInts_Request.native_write_field_c =
      (NativeWriteFieldCType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_c_ptr, typeof(NativeWriteFieldCType));
  }

  public IntPtr TypeSupportHandle
  {
    get
    {
      return native_get_typesupport();
    }
  }

  // Handle. Create on first use. Can be set for nested classes. TODO -- access...
  public IntPtr Handle
  {
    get
    {
      if (_handle == IntPtr.Zero)
        _handle = native_create_native_message();
      return _handle;
    }
  }

  public AddThreeInts_Request()
  {
  }

  public void ReadNativeMessage()
  {
    ReadNativeMessage(Handle);
  }

  public void ReadNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for reading");
    A = native_read_field_a(handle);
    B = native_read_field_b(handle);
    C = native_read_field_c(handle);
  }

  public void WriteNativeMessage()
  {
    if (_handle == IntPtr.Zero)
    { // message object reused for subsequent publishing.
      // This could be problematic if sequences sizes changed, but me handle that by checking for it in the c implementation
      _handle = native_create_native_message();
    }

    WriteNativeMessage(Handle);
  }

  // Write from CS to native handle
  public void WriteNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for writing");
    native_write_field_a(handle, A);
    native_write_field_b(handle, B);
    native_write_field_c(handle, C);
  }

  public void Dispose()
  {
    if (!disposed)
    {
      if (_handle != IntPtr.Zero)
      {
        native_destroy_native_message(_handle);
        _handle = IntPtr.Zero;
        disposed = true;
      }
    }
  }

  ~AddThreeInts_Request()
  {
    Dispose();
  }

};  // class AddThreeInts_Request
}  // namespace srv
}  // namespace custom_test_msgs




namespace custom_test_msgs
{
namespace srv
{
// message class
public class AddThreeInts_Response : MessageInternals, Message
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations

  // members
  public long Sum { get; set; }

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeGetTypeSupportType();
  private static NativeGetTypeSupportType native_get_typesupport = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate IntPtr NativeCreateNativeMessageType();
  private static NativeCreateNativeMessageType native_create_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeDestroyNativeMessageType(IntPtr messageHandle);
  private static NativeDestroyNativeMessageType native_destroy_native_message = null;

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate long NativeReadFieldSumType(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldSumType(
    IntPtr messageHandle, long value);


  private static NativeReadFieldSumType native_read_field_sum = null;
  private static NativeWriteFieldSumType native_write_field_sum = null;

  // This is done to preload before ros2 rmw_implementation attempts to find custom message library (and fails without absolute path)
  static private void MessageTypeSupportPreload()
  {
    if (RuntimeInformation.IsOSPlatform(OSPlatform.Linux))
    { //only affects Linux since on Windows PATH can be set effectively, dynamically
        const string rmw_fastrtps = "rmw_fastrtps_cpp";
        var rmw_implementation = Environment.GetEnvironmentVariable("RMW_IMPLEMENTATION");
        if (rmw_implementation == null)
        {
          var ros_distro = Environment.GetEnvironmentVariable("ROS_DISTRO");
          if (ros_distro == "galactic")
          { // no preloads for CycloneDDS, default for galactic
            return;
          }
          rmw_implementation = rmw_fastrtps; // default for all other distros
        }

        // TODO - generalize to Connext and other implementations
        if (rmw_implementation == rmw_fastrtps)
        { // TODO - get rcl level constants, e.g. rosidl_typesupport_fastrtps_c__identifier
          // Load typesupport for fastrtps (_c depends on _cpp)
          var loadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static AddThreeInts_Response()
  {
    Ros2csLogger logger = Ros2csLogger.GetInstance();

    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("custom_test_msgs__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("custom_test_msgs_srv_add_three_ints__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Response_native_get_type_support");
    AddThreeInts_Response.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Response_native_create_native_message");
    AddThreeInts_Response.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Response_native_destroy_native_message");
    AddThreeInts_Response.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_read_field_sum_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Response_native_read_field_sum");
    AddThreeInts_Response.native_read_field_sum =
      (NativeReadFieldSumType)Marshal.GetDelegateForFunctionPointer(
      native_read_field_sum_ptr, typeof(NativeReadFieldSumType));

    IntPtr native_write_field_sum_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_test_msgs__srv__AddThreeInts_Response_native_write_field_sum");
    AddThreeInts_Response.native_write_field_sum =
      (NativeWriteFieldSumType)Marshal.GetDelegateForFunctionPointer(
      native_write_field_sum_ptr, typeof(NativeWriteFieldSumType));
  }

  public IntPtr TypeSupportHandle
  {
    get
    {
      return native_get_typesupport();
    }
  }

  // Handle. Create on first use. Can be set for nested classes. TODO -- access...
  public IntPtr Handle
  {
    get
    {
      if (_handle == IntPtr.Zero)
        _handle = native_create_native_message();
      return _handle;
    }
  }

  public AddThreeInts_Response()
  {
  }

  public void ReadNativeMessage()
  {
    ReadNativeMessage(Handle);
  }

  public void ReadNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for reading");
    Sum = native_read_field_sum(handle);
  }

  public void WriteNativeMessage()
  {
    if (_handle == IntPtr.Zero)
    { // message object reused for subsequent publishing.
      // This could be problematic if sequences sizes changed, but me handle that by checking for it in the c implementation
      _handle = native_create_native_message();
    }

    WriteNativeMessage(Handle);
  }

  // Write from CS to native handle
  public void WriteNativeMessage(IntPtr handle)
  {
    if (handle == IntPtr.Zero)
      throw new System.InvalidOperationException("Invalid handle for writing");
    native_write_field_sum(handle, Sum);
  }

  public void Dispose()
  {
    if (!disposed)
    {
      if (_handle != IntPtr.Zero)
      {
        native_destroy_native_message(_handle);
        _handle = IntPtr.Zero;
        disposed = true;
      }
    }
  }

  ~AddThreeInts_Response()
  {
    Dispose();
  }

};  // class AddThreeInts_Response
}  // namespace srv
}  // namespace custom_test_msgs

