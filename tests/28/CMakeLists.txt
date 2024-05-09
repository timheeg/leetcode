add_executable(lc28-test)

target_sources(lc28-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc28-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc28
)

gtest_discover_tests(lc28-test)
