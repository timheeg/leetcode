add_library(lc172)

target_include_directories(lc172
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc172 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc172 PRIVATE
  compiler_flags
)
