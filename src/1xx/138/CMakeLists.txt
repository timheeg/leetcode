add_library(lc138)

target_include_directories(lc138
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc138 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc138 PRIVATE
  compiler_flags
)
