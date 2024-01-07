cmake_minimum_required(VERSION 3.14)
project(engine-tests)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download Google Test from GitHub
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../engine)

# Add your project's source files
add_executable(engine-tests test.cpp)

# Link against Google Test
target_link_libraries(engine-tests PRIVATE gtest_main engine Qt${QT_VERSION_MAJOR}::Core)

# Register your tests with CTest
include(GoogleTest)
gtest_discover_tests(engine-tests)
