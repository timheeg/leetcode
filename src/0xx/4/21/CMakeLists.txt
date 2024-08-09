add_library(lc21)

target_include_directories(lc21
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc21 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc21 PRIVATE
  compiler_flags
)
