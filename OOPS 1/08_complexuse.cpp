#include<bits/stdc++.h>
using namespace std;
#include "07_Complex.cpp"

int main()
{
  Complex c1(4,5);
  Complex c2(8, -9);

  c1.print();
  c1.add(c2);
  c1.print();
  c1.multiply(c2);
  c1.print();

  return 0;
}