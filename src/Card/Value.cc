#include "Value.hh"

// Value methodes
Value::Value(int v, int v2)
{
  this->first = v;
  this->second = v2;
  this->overflow = v>21;
}

Value::Value(int v)
{
  if (v==1)
  {
    this->first = 11;
    this->second = 1;
  }
  else {
    this->first = v;
    this->second = 0;
  }
  this->overflow = false;
}

// operator overload

Value operator+(const Value& v1, const Value& v2)
{
  if (v1.overflow)
  {
    int res = v1.first;
    if (v2.second != 0)
    {
      res += std::min(v2.first, v2.second); 
    }
    else 
    {
      res += v2.first;
    }
    return Value(res,0);
  }
  int first = v1.first;
  int second = v1.second;
  if (v2.second != 0) {
    if (v1.second != 0)
    {
      first += 1;
      second += 1;
    }
    else {
      first= v1.first + v2.first ;
      second = v1.first + v2.second;
    }
  }
  else {
    first += v2.first;
    if (v1.second != 0)
    {
      second += v2.first;
    }
  }
  // overflow check
  if (first > 21)
  {
    if (second != 0)
    {
      first = second;
        second = 0;
    }
  }
  return Value(first, second);
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

