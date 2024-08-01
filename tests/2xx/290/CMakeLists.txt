add_executable(lc290-test)

target_sources(lc290-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc290-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc290
)

gtest_discover_tests(lc290-test)
