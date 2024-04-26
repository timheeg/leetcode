add_executable(lc131-test)

target_sources(lc131-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_include_directories(lc131-test PRIVATE
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/test>
)

target_link_libraries(lc131-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc131
)

gtest_discover_tests(lc131-test)
