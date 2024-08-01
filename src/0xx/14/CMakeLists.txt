add_library(lc14)

target_include_directories(lc14
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc14 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc14 PRIVATE
  compiler_flags
)
