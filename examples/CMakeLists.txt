add_executable(example1 example1.cpp)
add_executable(example2 example2.cpp)

target_link_libraries(example1 formatter)
target_link_libraries(example2 formatter_ex)

install(TARGETS example1 example2
    RUNTIME DESTINATION bin
)
