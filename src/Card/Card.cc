#include "Card.hh"

// Card methodes
Card::Card(int value, Color color)
{
  this->value = Value(value);
  this->color = color;
}


// Value methodes
Value::Value(int v)
{
  this->first = v;
  this->second = (v-10 > 0 ? v-10 : 0);
  if (v==21)
  {
    this->second = 0;
  }

}

