cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project (lab5 VERSION 1.0.0)

set(CMAKEj

set(PROJECT_BINARY_DIR build)
set(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")

add_subdirectory(src build)

include_directories(${INCLUDE_DIR})
