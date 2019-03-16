cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project (lab5 VERSION 1.0.0)

set(PROJECT_BINARY_DIR build)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

set(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
set(RESOURCES_DIR "${PROJECT_SOURCE_DIR}/resources")

include_directories(${INCLUDE_DIR})

find_package(Qt5 COMPONENTS Widgets Qml Quick Core REQUIRED)
find_package(Qt5QuickCompiler)

add_subdirectory(src build)

include_directories(${PROJECT_BINARY_DIR})
