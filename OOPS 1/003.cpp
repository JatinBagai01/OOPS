#include<bits/stdc++.h>
using namespace std;

class triangle {
public:
  void printArea(int s1, int s2, int s3) {
    double s = (s1+s2+s3)/2.0;
    double area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout << "Area is " << area << endl;
    cout << "Perimeter is " << (s1+s2+s3) << endl;
  }
};

int main()
{
  triangle t1;
  t1.printArea(3,4,5);

  return 0;
}