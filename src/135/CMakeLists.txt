add_library(lc135)

target_include_directories(lc135
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc135 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc135 PRIVATE
  compiler_flags
)
