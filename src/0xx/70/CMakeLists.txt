add_library(lc70)

target_include_directories(lc70
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc70 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc70 PRIVATE
  compiler_flags
)
