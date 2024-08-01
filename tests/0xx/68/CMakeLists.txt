add_executable(lc68-test)

target_sources(lc68-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc68-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc68
)

gtest_discover_tests(lc68-test)
