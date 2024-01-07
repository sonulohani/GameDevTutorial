cmake_minimum_required(VERSION 3.27)

project(engine LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_library(engine SHARED
  engine_global.h
  Vector2D.cpp
  Vector2D.h
)

target_link_libraries(engine PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(engine PRIVATE ENGINE_LIBRARY)
