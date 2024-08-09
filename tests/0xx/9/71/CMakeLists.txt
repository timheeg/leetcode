add_executable(lc71-test)

target_sources(lc71-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc71-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc71
)

gtest_discover_tests(lc71-test)
