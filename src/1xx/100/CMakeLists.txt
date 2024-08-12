add_library(lc100)

target_include_directories(lc100
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc100 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc100 PRIVATE
  compiler_flags
)
