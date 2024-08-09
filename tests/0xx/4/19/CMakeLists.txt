add_executable(lc19-test)

target_sources(lc19-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc19-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc19
)

gtest_discover_tests(lc19-test)
