# include<bits/stdc++.h>
using namespace std;

class Student
{
private:
  int age;
  char* name; // Dynamic declare of string
  
public:
  Student(int age, char* name) {
    this->age = age;
    // **Deep Copy**
    // Copied the whole array 
    // into new array
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
  };

  void display() {
    cout << age << " " << name << endl;
  }

};