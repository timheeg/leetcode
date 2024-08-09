add_library(lc80)

target_include_directories(lc80
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc80 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc80 PRIVATE
  compiler_flags
)

set(installable_libs lc80 compiler_flags)
