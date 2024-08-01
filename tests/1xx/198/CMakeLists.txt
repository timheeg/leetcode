add_executable(lc198-test)

target_sources(lc198-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc198-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc198
)

gtest_discover_tests(lc198-test)
