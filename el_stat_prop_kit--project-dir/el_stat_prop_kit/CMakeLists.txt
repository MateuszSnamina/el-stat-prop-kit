cmake_minimum_required(VERSION 2.8)

file(GLOB cpp_files src/*.cpp)
file(GLOB hpp_files include/el_stat_prop_kit/*.hpp)

add_library(el_stat_prop_kit ${cpp_files})
target_include_directories(el_stat_prop_kit PUBLIC include)
target_link_libraries(el_stat_prop_kit PUBLIC armadillo boost_regex)

#enable_testing()
add_subdirectory(test)
add_subdirectory(executable)
