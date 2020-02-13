cmake_minimum_required(VERSION 3.7)
project(TP1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(TP1 main.cpp)
target_link_libraries(TP1 Qt5::Widgets)