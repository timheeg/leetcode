add_library(lc167)

target_include_directories(lc167
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc167 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc167 PRIVATE
  compiler_flags
)
