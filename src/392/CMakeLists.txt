add_library(lc392)

target_include_directories(lc392
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc392 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc392 PRIVATE
  compiler_flags
)
