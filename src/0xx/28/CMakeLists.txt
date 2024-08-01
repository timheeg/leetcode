add_library(lc28)

target_include_directories(lc28
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc28 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc28 PRIVATE
  compiler_flags
)
