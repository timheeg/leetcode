add_library(lc58)

target_include_directories(lc58
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc58 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc58 PRIVATE
  compiler_flags
)
