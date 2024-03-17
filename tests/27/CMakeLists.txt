add_executable(lc27-test)

target_sources(lc27-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc27-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc27
)

gtest_discover_tests(lc27-test)
