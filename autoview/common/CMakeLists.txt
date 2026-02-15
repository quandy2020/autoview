# Copyright 2025 The Openbot Authors (duyongquan)
# Common library: config, properties, visualizer_app, visualization_manager, interaction.

cmake_minimum_required(VERSION 3.16)

set(COMMON_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

set(COMMON_SOURCES
  visualizer_app.cpp
  config.cpp
  visualization_manager.cpp
  properties/bool_property.cpp
  properties/property.cpp
  properties/float_edit.cpp
  properties/property_tree_model.cpp
)
set(COMMON_HEADERS
  visualizer_app.hpp
  properties/property.hpp
  properties/float_edit.hpp
  properties/property_tree_model.hpp
  properties/bool_property.hpp
)

# Interaction (node/client abstraction) requires Autolink.
find_package(Autolink QUIET)
if(Autolink_FOUND)
  list(APPEND COMMON_SOURCES
    interaction/node_abstraction.cpp
    interaction/client_abstraction.cpp
  )
  list(APPEND COMMON_HEADERS
    interaction/node_abstraction.hpp
    interaction/node_abstraction_iface.hpp
    interaction/client_abstraction.hpp
    interaction/client_abstraction_iface.hpp
  )
endif()

add_library(autoview_common STATIC ${COMMON_SOURCES} ${COMMON_HEADERS})

# Include root (parent of autoview/) so that #include "autoview/common/..." resolves.
target_include_directories(autoview_common PUBLIC
  "${COMMON_DIR}/../.."
  ${COMMON_DIR}
)
target_link_libraries(autoview_common PUBLIC Qt::Core Qt::Widgets)
if(Autolink_FOUND)
  target_include_directories(autoview_common PRIVATE ${AUTOLINK_INCLUDE_DIRS})
  target_link_libraries(autoview_common PRIVATE Autolink::autolink)
endif()
set_target_properties(autoview_common PROPERTIES
  CXX_STANDARD 17
  POSITION_INDEPENDENT_CODE ON
)

if(TARGET autoview)
  target_link_libraries(autoview PRIVATE autoview_common)
endif()
