add_executable(lc2-test)

target_sources(lc2-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc2-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc2
)

gtest_discover_tests(lc2-test)
