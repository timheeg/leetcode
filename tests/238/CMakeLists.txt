add_executable(lc238-test)

target_sources(lc238-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_include_directories(lc238-test PRIVATE
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/test>
)

target_link_libraries(lc238-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc238
)

gtest_discover_tests(lc238-test)
