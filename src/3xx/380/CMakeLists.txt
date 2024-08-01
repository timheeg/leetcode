add_library(lc380)

target_include_directories(lc380
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc380 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc380 PRIVATE
  compiler_flags
)
