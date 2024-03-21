add_executable(lc122-test)

target_sources(lc122-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc122-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc122
)

gtest_discover_tests(lc122-test)
