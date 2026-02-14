# Copyright 2025 The Openbot Authors (duyongquan)
# Common library: config, properties, visualizer_app, visualization_manager, etc.

cmake_minimum_required(VERSION 3.16)

set(COMMON_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

set(COMMON_SOURCES
  visualizer_app.cpp
  config.cpp
  visualization_manager.cpp
  properties/property.cpp
  properties/float_edit.cpp
  properties/property_tree_model.cpp
)
set(COMMON_HEADERS
  visualizer_app.hpp
  properties/property.hpp
  properties/float_edit.hpp
  properties/property_tree_model.hpp
)

add_library(autoview_common STATIC ${COMMON_SOURCES} ${COMMON_HEADERS})
# Include root (parent of autoview/) so that #include "autoview/common/..." resolves.
target_include_directories(autoview_common PUBLIC
  "${COMMON_DIR}/../.."
  ${COMMON_DIR}
)
target_link_libraries(autoview_common PUBLIC Qt5::Core Qt5::Widgets)
set_target_properties(autoview_common PROPERTIES
  CXX_STANDARD 17
  POSITION_INDEPENDENT_CODE ON
)

if(TARGET autoview)
  target_link_libraries(autoview PRIVATE autoview_common)
endif()
