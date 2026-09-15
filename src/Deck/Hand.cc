#include "Hand.hh"

Hand::Hand() {}

void Hand::AddCard(const Card& c1)
{
  this->cards.push_back(c1);
}

Value Hand::GetValue()
{
  Value res = Value(0);
  auto it = cards.begin();
  while (it != cards.end()) {
    res = res + it->value;
    it++;
  }
  return res;
}


