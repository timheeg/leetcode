add_executable(lc242-test)

target_sources(lc242-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc242-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc242
)

gtest_discover_tests(lc242-test)
