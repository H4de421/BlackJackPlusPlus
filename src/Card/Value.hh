#pragma once
#include <ostream>

// class value
// used to handle multiples value a one/a set of card(s) (manly due to As)
class Value{
public:
  int first;
  int second;
  bool overflow;
  
  Value(int v);
  Value(int v, int v2);
};

Value operator+(const Value& v1, const Value& v2);
std::ostream& operator<<(std::ostream& out, const Value &v1);


