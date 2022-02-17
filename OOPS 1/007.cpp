#include<bits/stdc++.h>
using namespace std;

class Area {
    int length, breadth;

    public:
    Area(int length, int breadth) {
        this->length = length;
        this->breadth = breadth;
    }
    int returnArea() {
        return length*breadth;
    }
};

int main()
{
    int l, b;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;
    Area a(l,b);
    cout << "Area of given rectangle is: " << a.returnArea();
    
    return 0;
}