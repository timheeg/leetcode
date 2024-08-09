add_library(lc6)

target_include_directories(lc6
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc6 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc6 PRIVATE
  compiler_flags
)
