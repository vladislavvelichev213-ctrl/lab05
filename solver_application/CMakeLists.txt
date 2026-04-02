add_executable(solver solver.cpp)
target_link_libraries(solver solver_lib)
install(TARGETS solver RUNTIME DESTINATION bin)
