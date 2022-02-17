#include<bits/stdc++.h>
using namespace std;

class student {
  string name, address;
  int roll;
  string phone;

public: 
  student(string name) {
    this-> name = name;
  }
  void setAdd(string address) {
    this-> address = address;

  }
  void getAdd() {
    cout << address << endl;
  }
  void setRoll(int roll) {
    this-> roll = roll;

  }
  void getRoll() {
    cout << roll << endl;
  }
  void setPhone(string phone) {
    this-> phone = phone;

  }
  void getPhone() {
    cout << phone << endl;
  }
  
  void print() {
    cout << roll << " " << phone << " " << address << endl;
  }
  

};

int main()
{
   student s1("Sam");
   student s2("John");
   s1.setRoll(5);
   s1.setAdd("KI-79");
   s1.setPhone("9810256713");
   s2.setRoll(4);
   s2.setAdd("KI-64");
   s2.setPhone("9810001370");

   s1.print();
   s2.print();
   

  return 0;
}