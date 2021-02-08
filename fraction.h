#ifndef __FRACTION_H
#define __FRACTION_H
#include<iostream>
class Fraction {
  int numer;
  int denom;
  public:
  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator+(int);
  Fraction operator-(int);
  bool operator==(const Fraction&);
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool Simplest() const;
  void dispay() const;
  friend std::ostream& operator<<(const std::ostream&, const Fraction&);
};
