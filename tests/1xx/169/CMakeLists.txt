add_executable(lc169-test)

target_sources(lc169-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc169-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc169
)

gtest_discover_tests(lc169-test)
