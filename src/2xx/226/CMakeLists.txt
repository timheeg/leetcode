add_library(lc226)

target_include_directories(lc226
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc226 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc226 PRIVATE
  compiler_flags
)
