add_library(lc131)

target_include_directories(lc131
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc131 PRIVATE
  brute-force.cpp
  skip-intermediates.cpp
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc131 PRIVATE
  compiler_flags
)
