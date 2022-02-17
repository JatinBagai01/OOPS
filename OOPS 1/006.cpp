#include<bits/stdc++.h>
using namespace std;

class Area {
    int length, breadth;

    public:
    void setDim(int l, int b) {
        length = l;
        breadth = b;
    } 
    int getArea() {
        return length*breadth;
    }
};

int main()
{
    Area a;
    int l, b;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;
    a.setDim(l,b);
    cout << "Area of given rectangle is: " << a.getArea();
    
    return 0;
}