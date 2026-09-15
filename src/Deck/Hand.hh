#pragma once

#include "../Card/Card.hh"

#include "vector"


// class Deck
// used to store Cards multiples value a one/a set of card(s) (manly due to As)
class Hand{
private:
  std::vector<Card> cards;
public:
  Hand();

  void AddCard(const Card& c1);
  Value GetValue();
};


