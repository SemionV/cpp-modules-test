add_executable(program main.cpp)

add_dependencies(program std.compat)
target_link_libraries(program PRIVATE core std.compat)
