add_executable(lc189-test)

target_sources(lc189-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc189-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc189
)

gtest_discover_tests(lc189-test)
