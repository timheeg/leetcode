add_executable(lc125-test)

target_sources(lc125-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_include_directories(lc125-test PRIVATE
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/test>
)

target_link_libraries(lc125-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc125
)

gtest_discover_tests(lc125-test)
