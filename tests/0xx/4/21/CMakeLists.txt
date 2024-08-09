add_executable(lc21-test)

target_sources(lc21-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc21-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc21
)

gtest_discover_tests(lc21-test)
