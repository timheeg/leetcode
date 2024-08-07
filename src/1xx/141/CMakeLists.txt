add_library(lc141)

target_include_directories(lc141
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

target_sources(lc141 PRIVATE
  solution.cpp
  solution.h
)

# Link library dependencies
target_link_libraries(lc141 PRIVATE
  compiler_flags
)
