#include "Card/Card.hh"
#include <iostream>
#include <unistd.h>

// operator overload

Value operator+(const Value& v1, const Value& v2)
{
  int res[4] = {
      (v1.first+v2.first <= 21 ? v1.first+v2.first : 0),
      (v1.first+v2.second <= 21 ? v1.first+v2.second : 0),
      (v1.second+v2.first <= 21 ? v1.second+v2.first : 0),
      (v1.second+v2.second <= 21 ? v1.second+v2.second : 0)
    };
  int max    = res[0];
  for(int i = 0; i<4;i++) {
    if (res[i] > max)
    {
      max = res[i];
    }
  }
  return Value(max);
}

Value operator+(Value v1, const Card& c2)
{
  return v1 + c2.value;
}

Value operator+(const Card& c1, const Card& c2)
{
  return c1.value + c2.value;
}

std::ostream& operator<<(std::ostream& out, const Value &v1)
{
  out<<v1.first;
  if (v1.second)
  {
    out << " / " << v1.second; 
  }
  return out;
}

// Main loop

int main (void) {

  Card c1 = Card(11, CLUB);
  Card c2 = Card(4, CLUB);
  std::cout << (c1 + c2) << "\n"; 

  Card c3 = Card(11, CLUB);
  Card c4 = Card(10, CLUB);
  std::cout << (c3 + c4) << "\n"; 

  Card c5 = Card(11, CLUB);
  Card c6 = Card(2, CLUB);
  Card c7 = Card(8, CLUB);
  std::cout << (c5 + c6) << " ... " << (c5+c6+c7) << "\n"; 


  return 0;
}
