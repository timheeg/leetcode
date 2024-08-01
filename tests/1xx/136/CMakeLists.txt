add_executable(lc136-test)

target_sources(lc136-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc136-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc136
)

gtest_discover_tests(lc136-test)
