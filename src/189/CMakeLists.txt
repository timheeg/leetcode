add_library(lc189)

target_include_directories(lc189
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc189 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc189 PRIVATE
  compiler_flags
)

set(installable_libs lc189 compiler_flags)
