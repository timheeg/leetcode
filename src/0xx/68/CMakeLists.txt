add_library(lc68)

target_include_directories(lc68
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc68 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc68 PRIVATE
  compiler_flags
)
