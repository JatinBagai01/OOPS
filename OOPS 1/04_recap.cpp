#include<bits/stdc++.h>
using namespace std;
#include "01_student.cpp"

int main()
{
  Student s1; // Constructor 1 called

  Student s2(10); // Constructor 2 called

  Student s3(5, "Jatin"); // Constructor 3 called

  Student s4(s3); // Copy Constructor called

  s1 = s2; // Copy assignment operator

  Student s5 = s4; // = Student s5(s4);
                   // calls copy constructor
                   // to optimise



  return 0;
}