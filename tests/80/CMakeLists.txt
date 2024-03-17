add_executable(lc80-test)

target_sources(lc80-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc80-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc80
)

gtest_discover_tests(lc80-test)
