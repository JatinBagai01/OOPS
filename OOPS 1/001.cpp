#include<bits/stdc++.h>
using namespace std;

class Student {
  string name ;
  int roll;
  public: 
  void setName(string a) {
    name = a;
  }
  void setRoll(int a) {
    roll = a;
  }
  void print() {
    cout << name << " " << roll << endl;
  }
};

int main()
{
  Student s1;
  s1.setName("John");
  s1.setRoll(2);
  s1.print();
  return 0;
}