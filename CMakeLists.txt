cmake_minimum_required(VERSION 3.15)
project(GoogleFramework)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories("include/")
file(GLOB_RECURSE SOURCES "src/*.cc")

find_package(GTest REQUIRED)
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} gtest::gtest)
