add_library(lc137)

target_include_directories(lc137
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc137 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc137 PRIVATE
  compiler_flags
)
