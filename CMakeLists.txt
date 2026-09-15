cmake_minimum_required(VERSION 3.21.2)

enable_testing()

project(BlackJack)

add_executable(BlackJack)

set_target_properties( BlackJack PROPERTIES
    CXX_STANDARD 20
    CXX_EXTENSIONS OFF
)

target_compile_options( BlackJack PRIVATE
        -Wall -Wextra -Werror -pedantic -Wold-style-cast
)

set_target_properties( BlackJack PROPERTIES
    CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
    OUTPUT_NAME "BlackJack"
)

add_subdirectory(src)

#target_include_directories(BlackJack PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")
target_include_directories(BlackJack PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/")

add_subdirectory(tests)
