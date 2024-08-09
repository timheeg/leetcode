add_executable(lc30-test)

target_sources(lc30-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc30-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc30
)

gtest_discover_tests(lc30-test)
