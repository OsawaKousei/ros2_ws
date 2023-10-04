// generated from rosidl_generator_cs/resource/idl.cs.em
// with input from custom_message_unity:msg/CustomUnity.idl
// generated code does not contain a copyright notice

//TODO (adamdbrw): include depending on what is needed
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ROS2;
using ROS2.Internal;




namespace custom_message_unity
{
namespace msg
{
// message class
public class CustomUnity : MessageInternals, Message
{
  private IntPtr _handle;
  private static readonly DllLoadUtils dllLoadUtils;

  public bool IsDisposed { get { return disposed; } }
  private bool disposed;

  // constant declarations

  // members
  public double F1 { get; set; }
  public double F2 { get; set; }
  public double F3 { get; set; }

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
  private delegate double NativeReadFieldF1Type(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldF1Type(
    IntPtr messageHandle, double value);


  private static NativeReadFieldF1Type native_read_field_f1 = null;
  private static NativeWriteFieldF1Type native_write_field_f1 = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate double NativeReadFieldF2Type(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldF2Type(
    IntPtr messageHandle, double value);


  private static NativeReadFieldF2Type native_read_field_f2 = null;
  private static NativeWriteFieldF2Type native_write_field_f2 = null;
  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate double NativeReadFieldF3Type(
    IntPtr messageHandle);

  [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
  private delegate void NativeWriteFieldF3Type(
    IntPtr messageHandle, double value);


  private static NativeReadFieldF3Type native_read_field_f3 = null;
  private static NativeWriteFieldF3Type native_write_field_f3 = null;

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
          IntPtr messageLibraryTypesupportFastRTPS_CPP = loadUtils.LoadLibraryNoSuffix("custom_message_unity__rosidl_typesupport_fastrtps_cpp");
          IntPtr messageLibraryTypesupportFastRTPS_C = loadUtils.LoadLibraryNoSuffix("custom_message_unity__rosidl_typesupport_fastrtps_c");
      }
    }
  }

  static CustomUnity()
  {
    dllLoadUtils = DllLoadUtilsFactory.GetDllLoadUtils();
    IntPtr messageLibraryTypesupport = dllLoadUtils.LoadLibraryNoSuffix("custom_message_unity__rosidl_typesupport_c");
    IntPtr messageLibraryGenerator = dllLoadUtils.LoadLibraryNoSuffix("custom_message_unity__rosidl_generator_c");
    IntPtr messageLibraryIntro = dllLoadUtils.LoadLibraryNoSuffix("custom_message_unity__rosidl_typesupport_introspection_c");
    MessageTypeSupportPreload();

    IntPtr nativelibrary = dllLoadUtils.LoadLibrary("custom_message_unity_custom_unity__rosidl_typesupport_c");
    IntPtr native_get_typesupport_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_get_type_support");
    CustomUnity.native_get_typesupport = (NativeGetTypeSupportType)Marshal.GetDelegateForFunctionPointer(
      native_get_typesupport_ptr, typeof(NativeGetTypeSupportType));

    IntPtr native_create_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_create_native_message");
    CustomUnity.native_create_native_message = (NativeCreateNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_create_native_message_ptr, typeof(NativeCreateNativeMessageType));

    IntPtr native_destroy_native_message_ptr = dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_destroy_native_message");
    CustomUnity.native_destroy_native_message = (NativeDestroyNativeMessageType)Marshal.GetDelegateForFunctionPointer(
      native_destroy_native_message_ptr, typeof(NativeDestroyNativeMessageType));

    IntPtr native_read_field_f1_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_read_field_f1");
    CustomUnity.native_read_field_f1 =
      (NativeReadFieldF1Type)Marshal.GetDelegateForFunctionPointer(
      native_read_field_f1_ptr, typeof(NativeReadFieldF1Type));

    IntPtr native_write_field_f1_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_write_field_f1");
    CustomUnity.native_write_field_f1 =
      (NativeWriteFieldF1Type)Marshal.GetDelegateForFunctionPointer(
      native_write_field_f1_ptr, typeof(NativeWriteFieldF1Type));
    IntPtr native_read_field_f2_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_read_field_f2");
    CustomUnity.native_read_field_f2 =
      (NativeReadFieldF2Type)Marshal.GetDelegateForFunctionPointer(
      native_read_field_f2_ptr, typeof(NativeReadFieldF2Type));

    IntPtr native_write_field_f2_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_write_field_f2");
    CustomUnity.native_write_field_f2 =
      (NativeWriteFieldF2Type)Marshal.GetDelegateForFunctionPointer(
      native_write_field_f2_ptr, typeof(NativeWriteFieldF2Type));
    IntPtr native_read_field_f3_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_read_field_f3");
    CustomUnity.native_read_field_f3 =
      (NativeReadFieldF3Type)Marshal.GetDelegateForFunctionPointer(
      native_read_field_f3_ptr, typeof(NativeReadFieldF3Type));

    IntPtr native_write_field_f3_ptr =
      dllLoadUtils.GetProcAddress(nativelibrary, "custom_message_unity__msg__CustomUnity_native_write_field_f3");
    CustomUnity.native_write_field_f3 =
      (NativeWriteFieldF3Type)Marshal.GetDelegateForFunctionPointer(
      native_write_field_f3_ptr, typeof(NativeWriteFieldF3Type));
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

  public CustomUnity()
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
    F1 = native_read_field_f1(handle);
    F2 = native_read_field_f2(handle);
    F3 = native_read_field_f3(handle);
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
    native_write_field_f1(handle, F1);
    native_write_field_f2(handle, F2);
    native_write_field_f3(handle, F3);
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

  ~CustomUnity()
  {
    Dispose();
  }

};  // class CustomUnity
}  // namespace msg
}  // namespace custom_message_unity



