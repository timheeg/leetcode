add_library(lc198)

target_include_directories(lc198
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc198 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc198 PRIVATE
  compiler_flags
)
