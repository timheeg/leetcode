add_library(lc2)

target_include_directories(lc2
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc2 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc2 PRIVATE
  compiler_flags
)
