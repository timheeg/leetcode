add_executable(lc380-test)

target_sources(lc380-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
)

target_include_directories(lc380-test PRIVATE
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/test>
)

target_link_libraries(lc380-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc380
)

gtest_discover_tests(lc380-test)
