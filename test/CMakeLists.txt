cmake_minimum_required(VERSION 3.16)
project(testsubject LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)


find_package(Qt6 REQUIRED COMPONENTS Core Gui Test Widgets)

qt_add_executable(testsubject
    testsubject.cpp
)

set_target_properties(testsubject PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(testsubject PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Test
    Qt::Widgets
    subject
)
