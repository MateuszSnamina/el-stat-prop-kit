cmake_minimum_required(VERSION 2.8)

find_package(GTest REQUIRED)

file(GLOB cpp_files src/*.cpp)
file(GLOB hpp_files include/*.hpp)

add_executable(el_stat_prop_kit_executable ${cpp_files})
target_link_libraries(el_stat_prop_kit_executable el_stat_prop_kit)
target_include_directories(el_stat_prop_kit_test PUBLIC include)

