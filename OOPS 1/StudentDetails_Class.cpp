#include <iostream>

using namespace std;

class student{
    char name [20];
    int roll;
    int contact;
    char fathername[20];
    char mothername[20];
    public:
        void getData(){
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
        void displayData(){
            cout << "Name : " << name << endl;
            cout << "Roll Number : " << roll << endl;
            cout << "Contact : " << contact << endl;
            cout << "Father name : " << fathername << endl;
            cout << "Mother name : " << mothername << endl;
        }
};

int main(){
    int i;
    student s1,s2,s3,s4,s5;
    s1.getData();
    s2.getData();
    s3.getData();
    s4.getData();
    s5.getData();
    s1.displayData();
    s2.displayData();
    s3.displayData();
    s4.displayData();
    s5.displayData();
    return 0;
}