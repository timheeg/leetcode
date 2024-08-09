add_executable(lc92-test)

target_sources(lc92-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc92-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc92
)

gtest_discover_tests(lc92-test)
