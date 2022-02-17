#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
  int real;
  int img;

public:

  Complex(int real, int img) {
    this->real = real;
    this->img = img;
  }

  void print() {
    cout << real << " + " << img << "i\n";
  }

  void add(Complex c2) {
    this->real += c2.real;
    this->img += c2.img;
  }

  void multiply(Complex c2) {
    int temp = this->real;
    this->real = (this->real * c2.real) + (this->img * c2.img);
    this->img = (temp * c2.img) + (this->img * c2.real);
  }
};
