#include <bits/stdc++.h>
using namespace std;


class myclass1{
    private:
      int num;
      int rollno;
      string father;
      string mother;
      int contact;
      int sub1;
      int sub2;
      int sub3;
      int sub4;
      int sub5;
    public:
      void getdata(){
        cout<<"Enter a integer : ";
        cin>>num;
        
        cout<<"Roll_no : ";
        cin>>rollno;
        
        cout<<"Enter father name : ";
        cin>>father;
       
        cout<<"Enter mother name: ";
        cin>>mother;
        
        cout<<"Enter contact : ";
        cin>>contact;

        cout<<"sub1 : ";
        cin>>sub1;

        cout<<"sub2 : ";
        cin>>sub2;

        cout<<"sub3 :";
        cin>>sub3;

        cout<<"sub4 : ";
        cin>>sub4;

        cout<<"sub5 : ";
        cin>>sub5;
      }
      void display(){
        cout<<"num = "<<num<<endl;
        cout<<"rollno= "<<rollno<<endl;
        cout<<"father= "<<father<<endl;
        cout<<"mother= "<<mother<<endl;
        cout<<"contact= "<<contact<<endl;
        cout<<"avg marks= "<<(sub1+sub2+sub3+sub4+sub5)/5;
      }
};

int main(){
    myclass1 a1,b1,c1,d1,e1;
    a1.getdata();
    b1.getdata();
    c1.getdata();
    d1.getdata();
    e1.getdata();

    a1.display();
    b1.display();
    c1.display();
    d1.display();
    e1.display();
}