add_executable(lc392-test)

target_sources(lc392-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_include_directories(lc392-test PRIVATE
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/test>
)

target_link_libraries(lc392-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc392
)

gtest_discover_tests(lc392-test)
