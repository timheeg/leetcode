add_executable(lc167-test)

target_sources(lc167-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_include_directories(lc167-test PRIVATE
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/test>
)

target_link_libraries(lc167-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc167
)

gtest_discover_tests(lc167-test)
