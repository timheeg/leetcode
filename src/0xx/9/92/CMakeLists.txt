add_library(lc92)

target_include_directories(lc92
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc92 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc92 PRIVATE
  compiler_flags
)
