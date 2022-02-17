#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    int length, breadth;

public:
    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length*breadth;
    }
};

int main()
{
    
    rectangle r1(4,5), r2(5,8);
    cout << r1.area() << " " << r2.area() << endl;
    return 0;
}