#include "Card.hh"

// Card methodes
Card::Card(int value, Color color)
{
  this->value = Value(value);
  this->color = color;
}

Value operator+(Value v1, const Card& c2)
{
  return v1 + c2.value;
}

Value operator+(const Card& c1, const Card& c2)
{
  return c1.value + c2.value;
}

