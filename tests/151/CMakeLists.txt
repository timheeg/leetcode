add_executable(lc151-test)

target_sources(lc151-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc151-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc151
)

gtest_discover_tests(lc151-test)
