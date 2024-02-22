add_executable(dummy_test test1.cpp test2.cpp)
target_link_libraries(dummy_test PRIVATE Catch2::Catch2WithMain)