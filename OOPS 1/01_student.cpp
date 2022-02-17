#include<bits/stdc++.h>
using namespace std;

class Student {
  public:
  string name;

  private: 
  int roll;

  public:
  // Default constructor
  Student() {
    cout << "Constructor called!"  << endl;
  }

  // Parameterised Constructor

  Student(int a) {
    cout << "Constructor 2 called!" << endl;
    roll = a;
  }

  Student(int a, string n) {
    cout << "Constructor 3 called!" << endl;
    roll = a;
    name = n;
  }

  // Destructor

  ~Student() {
    cout << "Destructor called!" << endl;
  }

  void setRoll(int a) {
    roll = a;
  }

  int getRoll() {
    return roll;
  }

  void display() {
    cout << roll << " " << name << endl;
  }

};
