add_executable(lc201-test)

target_sources(lc201-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc201-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc201
)

gtest_discover_tests(lc201-test)
