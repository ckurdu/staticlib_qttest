cmake_minimum_required(VERSION 3.16)

project(subject VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 COMPONENTS Core Network REQUIRED)

add_library(subject STATIC
    subject.cpp
    subject.h
)

target_link_libraries(subject Qt6::Core Qt6::Network)

target_compile_definitions(subject PRIVATE WPRESTCLIENTLIB_LIBRARY)


target_include_directories(subject
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

