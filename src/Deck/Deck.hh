#pragma once
#include "../Card/Card.hh"
#include "Hand.hh"
#include <vector>

// class Deck
// used to store Cards multiples value a one/a set of card(s) (manly due to As)
class Deck{
private:
  std::vector<Card> cards;
  int capacity;

public:
  Deck();

  void shuffle();
  bool DrawCard(Hand& hand);
  void AddCard(const Card& c1);
};

