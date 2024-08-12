add_library(lc104)

target_include_directories(lc104
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc104 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc104 PRIVATE
  compiler_flags
)
