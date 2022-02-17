#include <bits/stdc++.h>
using namespace std;
#include "01_student.cpp"

int main() {
  // Statically Declaration
  
  Student s1;
  s1.name = "jatin";

  // getters and setters
  
  s1.setRoll(5);
  s1. display();

  // Dynamically Declaration

  Student *s2 = new Student;
  (*s2).name = "bagai";
  s2 -> name = "Jatin";

  // getters and setters

  s2 -> setRoll(5);
  s2 -> display();

  return 0;
} 