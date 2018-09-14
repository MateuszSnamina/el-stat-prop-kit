cmake_minimum_required(VERSION 2.8)

find_package(GTest REQUIRED)

file(GLOB cpp_files src/*.cpp)
file(GLOB hpp_files include/*.hpp)

#message (INFO "${cpp_files}")

add_executable(el_stat_prop_kit_test ${cpp_files})
target_link_libraries(el_stat_prop_kit_test el_stat_prop_kit gtest gtest_main)
target_include_directories(el_stat_prop_kit_test PUBLIC include)

#add_test(NAME el_stat_prop_kit_test COMMAND el_stat_prop_kit_test)
GTEST_ADD_TESTS(el_stat_prop_kit_test "" ${cpp_files})
