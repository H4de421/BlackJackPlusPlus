#pragma once
#include "Value.hh"
// color of cards
enum Color {
  HEART,
  CLUB,
  DIAMOND,
  SPADE
};

// class Card
// used to represnet card as object in the code
class Card{
public:
  Value value = Value(0);
  Color color;

  Card(int value, Color color);
};

Value operator+(Value v1, const Card& c2);
Value operator+(const Card& c1, const Card& c2);

