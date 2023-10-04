# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosidl_generator_cs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rosidl_generator_cs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rosidl_generator_cs_FOUND FALSE)
  elseif(NOT rosidl_generator_cs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rosidl_generator_cs_FOUND FALSE)
  endif()
  return()
endif()
set(_rosidl_generator_cs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosidl_generator_cs_FIND_QUIETLY)
  message(STATUS "Found rosidl_generator_cs: 2.0.0 (${rosidl_generator_cs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rosidl_generator_cs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rosidl_generator_cs_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosidl_generator_cs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_generator_cs_get_typesupports.cmake;register_cs.cmake;rosidl_generator_cs-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${rosidl_generator_cs_DIR}/${_extra}")
endforeach()
