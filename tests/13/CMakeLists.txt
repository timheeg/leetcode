add_executable(lc13-test)

target_sources(lc13-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc13-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc13
)

gtest_discover_tests(lc13-test)
