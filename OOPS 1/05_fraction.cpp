#include<bits/stdc++.h>
using namespace std;

class Fraction {
  int numerator, denominator;

  public:

  Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
  }

  void print() {
    cout << "Given Fraction is: " << numerator << "/" << denominator << endl;
  }

  void simplify() {
    int hcf = 1;
    int j = min(this->numerator, this -> denominator);

    for(int i=1; i<=j; i++) {
      if(this ->numerator % i == 0 && this -> denominator % i == 0) 
        hcf = i;
    }

    this->denominator /= hcf;
    this->numerator /= hcf;
  }

  void add(Fraction const &f2) {
    int lcm = this->denominator * f2.denominator;

    int x = f2.denominator*(this->numerator);
    int y = this->denominator*(f2.numerator);

    this->numerator = x+y;
    this->denominator = lcm;

    simplify();
  }

  void multiply(Fraction const &f2) {
    this ->numerator *= f2.numerator;
    this->denominator *= f2.denominator;

    simplify();
  }

};