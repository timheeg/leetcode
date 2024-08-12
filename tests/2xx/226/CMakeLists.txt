add_executable(lc226-test)

target_sources(lc226-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc226-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc226
)

gtest_discover_tests(lc226-test)
