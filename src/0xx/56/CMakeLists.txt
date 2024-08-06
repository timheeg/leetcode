add_library(lc56)

target_include_directories(lc56
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc56 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc56 PRIVATE
  compiler_flags
)
