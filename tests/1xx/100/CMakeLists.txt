add_executable(lc100-test)

target_sources(lc100-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc100-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc100
)

gtest_discover_tests(lc100-test)
