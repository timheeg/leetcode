add_executable(lc56-test)

target_sources(lc56-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc56-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc56
)

gtest_discover_tests(lc56-test)
