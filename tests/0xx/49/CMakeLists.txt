add_executable(lc49-test)

target_sources(lc49-test
  PRIVATE
    check.h
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc49-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc49
)

gtest_discover_tests(lc49-test)
