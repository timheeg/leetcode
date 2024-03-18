add_executable(lc121-test)

target_sources(lc121-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_link_libraries(lc121-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc121
)

gtest_discover_tests(lc121-test)
