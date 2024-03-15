add_executable(lc88-test)

target_sources(lc88-test
  PRIVATE
    leetcode.test.cpp
    main.cpp
    more.test.cpp
)

target_link_libraries(lc88-test
  PRIVATE
    compiler_flags
    GTest::gtest
    GTest::gtest_main
    lc88
)

gtest_discover_tests(lc88-test)

install(TARGETS lc88-test)
install(FILES $<TARGET_RUNTIME_DLLS:lc88-test> TYPE BIN)
