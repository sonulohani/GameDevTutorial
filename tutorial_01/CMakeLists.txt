cmake_minimum_required(VERSION 3.20)

project(tutorial_01)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the SFML library
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

# Add the executable
add_executable(MyGame main.cpp)

# Add the assets directory to the executable's working directory
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
# file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

# Link SFML libraries
target_link_libraries(MyGame PRIVATE sfml-system sfml-window sfml-graphics)