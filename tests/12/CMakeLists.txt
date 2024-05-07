add_executable(lc12-test)

target_sources(lc12-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc12-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc12
)

gtest_discover_tests(lc12-test)
