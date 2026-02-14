# FindAutolink.cmake - Find the Autolink library (autonomy project).
#
# Usage:
#   set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
#   find_package(Autolink REQUIRED)
#   target_link_libraries(your_target PRIVATE Autolink::autolink)
#
# Optional:
#   - AUTOLINK_ROOT: root of autolink source tree (e.g. autonomy/src/autolink)
#   - AUTOLINK_BUILD_DIR: autolink build dir where libautolink is (default: ${AUTOLINK_ROOT}/build)

include(FindPackageHandleStandardArgs)

set(_AUTOLINK_SEARCH_ROOTS "")
if(DEFINED ENV{AUTOLINK_ROOT})
  list(APPEND _AUTOLINK_SEARCH_ROOTS "$ENV{AUTOLINK_ROOT}")
endif()
if(AUTOLINK_ROOT)
  list(APPEND _AUTOLINK_SEARCH_ROOTS "${AUTOLINK_ROOT}")
endif()
# Sibling of autoview: autonomy/src/autolink when this file is in autonomy/src/autoview/cmake
get_filename_component(_AUTOVIEW_DIR "${CMAKE_CURRENT_SOURCE_DIR}" DIRECTORY)
get_filename_component(_SRC_DIR "${_AUTOVIEW_DIR}" DIRECTORY)
if(EXISTS "${_SRC_DIR}/autolink/autolink/autolink.hpp")
  list(APPEND _AUTOLINK_SEARCH_ROOTS "${_SRC_DIR}/autolink")
endif()

set(AUTOLINK_FOUND FALSE)
set(AUTOLINK_INCLUDE_DIRS "")
set(AUTOLINK_LIBRARIES "")

foreach(_ROOT IN LISTS _AUTOLINK_SEARCH_ROOTS)
  if(NOT _ROOT OR NOT EXISTS "${_ROOT}")
    continue()
  endif()
  set(_INC "${_ROOT}")
  if(EXISTS "${_INC}/autolink/autolink.hpp")
    set(AUTOLINK_INCLUDE_DIRS "${_INC}")
    set(_AUTOLINK_ROOT "${_ROOT}")
    break()
  endif()
endforeach()

if(AUTOLINK_INCLUDE_DIRS)
  set(_BUILD_DIR "${AUTOLINK_BUILD_DIR}")
  if(NOT _BUILD_DIR)
    set(_BUILD_DIR "${_AUTOLINK_ROOT}/build")
  endif()
  find_library(AUTOLINK_LIBRARY
    NAMES autolink
    PATHS "${_BUILD_DIR}/lib" "${_BUILD_DIR}"
    NO_DEFAULT_PATH
  )
  if(AUTOLINK_LIBRARY)
    set(AUTOLINK_LIBRARIES "${AUTOLINK_LIBRARY}")
    set(AUTOLINK_FOUND TRUE)
  endif()
endif()

find_package_handle_standard_args(Autolink
  REQUIRED_VARS AUTOLINK_INCLUDE_DIRS AUTOLINK_LIBRARIES
  FOUND_VAR AUTOLINK_FOUND
)

if(Autolink_FOUND AND NOT TARGET Autolink::autolink)
  add_library(Autolink::autolink SHARED IMPORTED)
  set_target_properties(Autolink::autolink PROPERTIES
    IMPORTED_LOCATION "${AUTOLINK_LIBRARIES}"
    INTERFACE_INCLUDE_DIRECTORIES "${AUTOLINK_INCLUDE_DIRS}"
  )
endif()

unset(_AUTOLINK_SEARCH_ROOTS)
unset(_AUTOVIEW_DIR)
unset(_SRC_DIR)
unset(_INC)
unset(_ROOT)
unset(_BUILD_DIR)
