add_executable(lc55-test)

target_sources(lc55-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc55-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc55
)

gtest_discover_tests(lc55-test)
