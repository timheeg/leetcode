add_library(lc201)

target_include_directories(lc201
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc201 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc201 PRIVATE
  compiler_flags
)
