add_executable(lc274-test)

target_sources(lc274-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc274-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc274
)

gtest_discover_tests(lc274-test)
