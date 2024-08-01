add_library(lc12)

target_include_directories(lc12
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc12 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc12 PRIVATE
  compiler_flags
)
