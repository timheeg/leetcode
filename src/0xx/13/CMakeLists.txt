add_library(lc13)

target_include_directories(lc13
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc13 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc13 PRIVATE
  compiler_flags
)
