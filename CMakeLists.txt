cmake_minimum_required(VERSION 3.27)
project(GameDev)

# Add the shared library subdirectory
add_subdirectory(engine)

# Add the application subdirectory
add_subdirectory(Tutorial-01)

add_subdirectory(engine-tests)
