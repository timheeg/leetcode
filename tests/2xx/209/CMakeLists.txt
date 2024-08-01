add_executable(lc209-test)

target_sources(lc209-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc209-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc209
)

gtest_discover_tests(lc209-test)
