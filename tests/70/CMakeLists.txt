add_executable(lc70-test)

target_sources(lc70-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc70-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc70
)

gtest_discover_tests(lc70-test)
