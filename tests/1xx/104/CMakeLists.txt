add_executable(lc104-test)

target_sources(lc104-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc104-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc104
)

gtest_discover_tests(lc104-test)
