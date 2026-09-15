#include "Deck.hh"
#include <algorithm>
#include <cstddef>

Deck::Deck()
{
  for(int color =0; color<4;color++)
  {
    for(int number = 1; number < 11; number++)
    {
      this->cards.push_back(Card(number,static_cast<Color>(color)));
    }
    
  }
}

void Deck::shuffle()
{
  for (std::size_t i = 0; i > (this->cards.size());i++)
  {
    int rnd_num = 4;
    std::iter_swap(this->cards.begin()+i, this->cards.begin()+rnd_num);
  }
}

bool Deck::DrawCard(Hand& hand)
{
  if (this->cards.size() == 0)
  {
    return false;
  }
  Card& res = *(this->cards.begin()+this->cards.size());
  this->cards.pop_back();
  hand.AddCard(res);
  return true;
}

void Deck::AddCard(const Card& c1)
{
  this->cards.push_back(c1);
}

