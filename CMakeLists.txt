# Copyright 2025 The Openbot Authors (duyongquan)
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.16)
project(autoview VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets Core)
find_package(Protobuf REQUIRED)

set(AUTOVIEW_SOURCES
  autoview/main.cpp
  autoview/common/visualizer_app.cpp
  autoview/common/config.cpp
  autoview/common/visualization_manager.cpp
  autoview/common/properties/property.cpp
  autoview/common/properties/float_edit.cpp
  autoview/common/properties/property_tree_model.cpp
  autoview/common/visualizer_app.hpp
  autoview/common/properties/property.hpp
  autoview/common/properties/float_edit.hpp
  autoview/common/properties/property_tree_model.hpp
)

add_executable(autoview ${AUTOVIEW_SOURCES})
set_target_properties(autoview PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
  RUNTIME_OUTPUT_NAME "autoview"
)

add_subdirectory(autoview/commsgs)

target_include_directories(autoview PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_BINARY_DIR}/commsgs
)
target_link_libraries(autoview PRIVATE Qt5::Widgets autoview_commsgs)


install(TARGETS autoview
  RUNTIME DESTINATION bin
)
