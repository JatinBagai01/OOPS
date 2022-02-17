#include<bits/stdc++.h>
using namespace std;
#include "05_fraction.cpp"

int main()
{
  Fraction f1(4,9);
  Fraction f2(6,7);
  f1.add(f2);
  f1.print(); 
  f1.multiply(f2);
  f1.print();
  return 0;
}