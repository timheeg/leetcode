add_executable(lc3-test)

target_sources(lc3-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc3-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc3
)

gtest_discover_tests(lc3-test)
