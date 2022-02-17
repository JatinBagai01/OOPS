#include<bits/stdc++.h>
using namespace std;

class triangle {
  int s1,s2,s3;
public:
  triangle(int s1, int s2, int s3) {
    this->s1 = s1;
    this->s2 = s2;
    this->s3 = s3;
  }
  void printArea() {
    double s = (s1+s2+s3)/2.0;
    double area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout << "Area is " << area << endl;
    cout << "Perimeter is " << (s1+s2+s3) << endl;
  }
};

int main()
{
  triangle t1(3,4,5);
  t1.printArea();

  return 0;
}