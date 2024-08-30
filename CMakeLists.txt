cmake_minimum_required(VERSION 3.22)

# Set the project name and version
project(three-in-a-row VERSION 0.1)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(three-in-a-row src/main.cpp)
