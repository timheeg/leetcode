cmake_minimum_required(VERSION 3.28)

project(leetcode LANGUAGES CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Define compiler flags target
include(compiler_flags)

add_subdirectory(src)
add_subdirectory(tests)
