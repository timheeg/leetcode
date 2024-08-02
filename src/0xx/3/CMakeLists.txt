add_library(lc3)

target_include_directories(lc3
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc3 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc3 PRIVATE
  compiler_flags
)
