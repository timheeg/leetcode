add_library(lc136)

target_include_directories(lc136
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc136 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc136 PRIVATE
  compiler_flags
)
