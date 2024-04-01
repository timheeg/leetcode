add_library(lc274)

target_include_directories(lc274
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc274 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc274 PRIVATE
  compiler_flags
)

set(installable_libs lc274 compiler_flags)
