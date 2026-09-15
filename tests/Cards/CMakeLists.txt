cmake_minimum_required(VERSION 3.21.2)

add_executable(CardTest)
set_target_properties( CardTest PROPERTIES
    CXX_STANDARD 20
    CXX_EXTENSIONS OFF
)
target_compile_options( CardTest PRIVATE
        -Wall -Wextra -Werror -pedantic -Wold-style-cast
)
set_target_properties( CardTest PROPERTIES
    CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
    OUTPUT_NAME "BlackJack"
)
target_include_directories(CardTest PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}../../../src/Card/")

target_sources(CardTest PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}../../../src/Card/Card.cc" )
target_sources(CardTest PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}../../../src/Card/Value.cc" )

target_sources(CardTest PRIVATE "CardTest.cc")

add_subdirectory(
  Basic)

