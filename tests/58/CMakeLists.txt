add_executable(lc58-test)

target_sources(lc58-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc58-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc58
)

gtest_discover_tests(lc58-test)
