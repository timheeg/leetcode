add_library(lc122)

target_include_directories(lc122
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc122 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc122 PRIVATE
  compiler_flags
)

set(installable_libs lc122 compiler_flags)
