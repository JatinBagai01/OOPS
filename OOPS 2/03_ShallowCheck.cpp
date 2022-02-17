#include<bits/stdc++.h>
using namespace std;
#include "01_ShallowCopy.cpp"

int main()
{
  char name[] = "jatin";
  Student s1(20, name);
  s1.display();

  name[1] = 'e';
  Student s2(22, name);
  s2.display();
  s1.display();

  return 0;
}