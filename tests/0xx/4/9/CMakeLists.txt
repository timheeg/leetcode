add_executable(lc9-test)

target_sources(lc9-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc9-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc9
)

gtest_discover_tests(lc9-test)
