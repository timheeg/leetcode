add_library(lc55)

target_include_directories(lc55
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc55 PRIVATE
  dead_recursion_dead.h
  debug.h
  loop.h
  math_ish.h
  recursion.h
  recursion_dead.h
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc55 PRIVATE
  compiler_flags
)

set(installable_libs lc55 compiler_flags)
