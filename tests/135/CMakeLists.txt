add_executable(lc135-test)

target_sources(lc135-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc135-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc135
)

gtest_discover_tests(lc135-test)
