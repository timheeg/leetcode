add_library(lc228)

target_include_directories(lc228
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc228 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc228 PRIVATE
  compiler_flags
)
