add_executable(lc205-test)

target_sources(lc205-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc205-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc205
)

gtest_discover_tests(lc205-test)
