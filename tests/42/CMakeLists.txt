add_executable(lc42-test)

target_sources(lc42-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc42-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc42
)

gtest_discover_tests(lc42-test)
