add_library(lc242)

target_include_directories(lc242
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc242 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc242 PRIVATE
  compiler_flags
)
