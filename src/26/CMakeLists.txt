add_library(lc26)

target_include_directories(lc26
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc26 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc26 PRIVATE
  compiler_flags
)

set(installable_libs lc26 compiler_flags)
