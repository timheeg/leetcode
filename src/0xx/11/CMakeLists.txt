add_library(lc11)

target_include_directories(lc11
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc11 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc11 PRIVATE
  compiler_flags
)
