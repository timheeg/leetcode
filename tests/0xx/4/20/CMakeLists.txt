add_executable(lc20-test)

target_sources(lc20-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc20-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc20
)

gtest_discover_tests(lc20-test)
