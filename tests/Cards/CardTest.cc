#include "../../src/Card/Card.hh"
#include <string>
#include <unistd.h>
#include <vector>
#include <iostream>

int main(int argc, char *argv[]) {

  std::vector<Card> cards;
  for(int i = 1; i<argc; i++)
  {
    cards.push_back(Card(std::stoi(argv[i]), CLUB));
  }
  Value res=0;
  auto it = cards.begin();
  while (it!=cards.end()) {
    res = res + it->value;
    it++;
  }
  std::cout << res;
  return 0;
}

