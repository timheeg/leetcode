add_library(lc9)

target_include_directories(lc9
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc9 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc9 PRIVATE
  compiler_flags
)
