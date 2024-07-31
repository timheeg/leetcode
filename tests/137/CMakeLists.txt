add_executable(lc137-test)

target_sources(lc137-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc137-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc137
)

gtest_discover_tests(lc137-test)
