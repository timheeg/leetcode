add_library(lc88)

target_include_directories(lc88
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc88 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc88 PRIVATE
  compiler_flags
)

set(installable_libs lc88 compiler_flags)
