add_executable(hello hello.cpp)
target_compile_options(hello PRIVATE -std=c++20 -Wextra)

# add_executable(tests test.cpp)
# target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
