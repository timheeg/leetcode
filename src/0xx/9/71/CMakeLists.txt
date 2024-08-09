add_library(lc71)

target_include_directories(lc71
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc71 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc71 PRIVATE
  compiler_flags
)
