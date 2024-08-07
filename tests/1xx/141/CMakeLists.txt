add_executable(lc141-test)

target_sources(lc141-test
  PRIVATE
    create.test.cpp
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc141-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc141
)

gtest_discover_tests(lc141-test)
