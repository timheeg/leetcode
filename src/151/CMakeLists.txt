add_library(lc151)

target_include_directories(lc151
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc151 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc151 PRIVATE
  compiler_flags
)
