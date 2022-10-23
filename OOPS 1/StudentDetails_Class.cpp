#include <iostream> // importing library

using namespace std;

// Creating a class to store input from user of student details and display
class student{
    char name [20];
    int roll;
    int contact;
    char fathername[20];
    char mothername[20];
    public:
        void getData(){ // Function to get data from user
            cout << "Enter name: " << endl;
            cin >> name;
            cout << "Enter roll no.: " << endl;
            cin >> roll;
            cout << "Enter contact: " << endl;
            cin >> contact;
            cout << "Enter father name: " << endl;
            cin >> fathername;
            cout << "Enter mother name: " << endl;
            cin >> mothername;
        }
        void displayData(){ // Function to display user entered data
            cout << "Name : " << name << endl;
            cout << "Roll Number : " << roll << endl;
            cout << "Contact : " << contact << endl;
            cout << "Father name : " << fathername << endl;
            cout << "Mother name : " << mothername << endl;
        }
};

int main(){ // main function 
    int i;
    student s1,s2,s3,s4,s5; // creating objects of class student to store and display data
    s1.getData(); // using getData function to store or get data from user
    s2.getData();
    s3.getData();
    s4.getData();
    s5.getData();
    s1.displayData(); // using displayData function to display student data
    s2.displayData();
    s3.displayData();
    s4.displayData();
    s5.displayData();
    return 0;
}