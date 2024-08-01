add_executable(lc11-test)

target_sources(lc11-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc11-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc11
)

gtest_discover_tests(lc11-test)
