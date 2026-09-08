#pragma once

// color of cards
enum Color {
  HEART,
  CLUB,
  DIAMOND,
  SPADE
};

// class value
// used to handle multiples value a one/a set of card(s) (manly due to As)
class Value{
public:
  int first;
  int second;
  
  Value(int v);
};

// class Card
// used to represnet card as object in the code
class Card{
public:
  Value value = Value(0);
  Color color;

  Card(int value, Color color);
};


