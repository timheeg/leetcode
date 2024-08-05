add_executable(lc228-test)

target_sources(lc228-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc228-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc228
)

gtest_discover_tests(lc228-test)
