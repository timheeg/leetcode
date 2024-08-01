add_library(lc205)

target_include_directories(lc205
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc205 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc205 PRIVATE
  compiler_flags
)
