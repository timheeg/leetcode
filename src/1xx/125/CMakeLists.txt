add_library(lc125)

target_include_directories(lc125
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc125 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc125 PRIVATE
  compiler_flags
)
