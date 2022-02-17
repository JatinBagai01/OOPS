#include<bits/stdc++.h>
using namespace std;

class Average {
    public:
    static void calAverage(int a, int b, int c) {
        int average = (a + b + c) / 3;
        cout << average << endl;
    }
};

int main()
{
    int a,b,c;
    cout << "Enter the three numbers separated by spaces: ";
    cin >> a >> b >> c;
    cout << "Average of given three numbers is: ";
    Average::calAverage(a,b,c); 


    return 0;
}