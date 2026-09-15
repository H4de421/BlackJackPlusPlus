cmake_minimum_required(VERSION 3.21.2)

add_test(NAME Addition1 COMMAND CardTest 2 3)
set_tests_properties(Addition1 PROPERTIES
    PASS_REGULAR_EXPRESSION "5" )

add_test(NAME Addition2 COMMAND CardTest 2 3 4 5)
set_tests_properties(Addition2 PROPERTIES
    PASS_REGULAR_EXPRESSION "14" )

add_test(NAME As1 COMMAND CardTest 1)
set_tests_properties(As1 PROPERTIES
    PASS_REGULAR_EXPRESSION "11 / 1" )

add_test(NAME As2 COMMAND CardTest 5 1)
set_tests_properties(As2 PROPERTIES
    PASS_REGULAR_EXPRESSION "16 / 6" )

add_test(NAME AsOverflow1 COMMAND CardTest  5 10 1)
set_tests_properties(AsOverflow1 PROPERTIES
    PASS_REGULAR_EXPRESSION "16" )

add_test(NAME AsOverflow2 COMMAND CardTest  5 9 9 1 9)
set_tests_properties(AsOverflow2 PROPERTIES
    PASS_REGULAR_EXPRESSION "33" )

add_test(NAME Overflow1 COMMAND CardTest  9 9 5)
set_tests_properties(Overflow1 PROPERTIES
    PASS_REGULAR_EXPRESSION "23" )





