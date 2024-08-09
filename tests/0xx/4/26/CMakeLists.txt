add_executable(lc26-test)

target_sources(lc26-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc26-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc26
)

gtest_discover_tests(lc26-test)
