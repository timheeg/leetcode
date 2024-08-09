add_library(lc19)

target_include_directories(lc19
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc19 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc19 PRIVATE
  compiler_flags
)
