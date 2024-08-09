add_library(lc49)

target_include_directories(lc49
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc49 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc49 PRIVATE
  compiler_flags
)
