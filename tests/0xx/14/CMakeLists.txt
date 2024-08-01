add_executable(lc14-test)

target_sources(lc14-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc14-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc14
)

gtest_discover_tests(lc14-test)
