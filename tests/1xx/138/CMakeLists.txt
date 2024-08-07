add_executable(lc138-test)

target_sources(lc138-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc138-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc138
)

gtest_discover_tests(lc138-test)
