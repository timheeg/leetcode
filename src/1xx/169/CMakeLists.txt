add_library(lc169)

target_include_directories(lc169
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc169 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc169 PRIVATE
  compiler_flags
)

set(installable_libs lc169 compiler_flags)
