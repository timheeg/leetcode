add_executable(lc6-test)

target_sources(lc6-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc6-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc6
)

gtest_discover_tests(lc6-test)
