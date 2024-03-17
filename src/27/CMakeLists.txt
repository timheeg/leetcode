add_library(lc27)

target_include_directories(lc27
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc27 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc27 PRIVATE
  compiler_flags
)

set(installable_libs lc27 compiler_flags)
