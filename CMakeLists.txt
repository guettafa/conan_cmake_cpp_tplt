cmake_minimum_required(VERSION 3.15)
project(GoogleFramework)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
add_executable(${PROJECT_NAME} src/main.cc)
target_link_libraries(${PROJECT_NAME} gtest::gtest)
