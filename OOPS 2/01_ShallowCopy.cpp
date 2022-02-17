class Student
{
private:
  int age;
  char* name; // Dynamic declare of string
  
public:
  Student(int age, char* name) {
    this->age = age;
    // **Shallow Copy**
    // Only copied the address 
    // of first location
    this->name = name;
  };

  void display() {
    cout << age << " " << name << endl;
  }

};
