add_library(lc42)

target_include_directories(lc42
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc42 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc42 PRIVATE
  compiler_flags
)
