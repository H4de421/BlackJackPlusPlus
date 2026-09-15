cmake_minimum_required(VERSION 3.21.2)

target_sources(BlackJack PRIVATE main.cc)

add_subdirectory(
  Card)
add_subdirectory(
  Deck)
