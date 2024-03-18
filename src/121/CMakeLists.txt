add_library(lc121)

target_include_directories(lc121
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc121 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc121 PRIVATE
  compiler_flags
)

set(installable_libs lc121 compiler_flags)
