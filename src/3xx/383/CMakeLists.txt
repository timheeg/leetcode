add_library(lc383)

target_include_directories(lc383
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc383 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc383 PRIVATE
  compiler_flags
)
