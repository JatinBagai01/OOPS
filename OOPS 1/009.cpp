#include<bits/stdc++.h>
using namespace std;

class Complex {
    int real, imaginary;

    public:

    Complex(int i, int r) {
        this-> real = r;
        this-> imaginary = i;
    }

    void add(const Complex &c2) {
        real += c2.real;
        imaginary += c2.imaginary; 
    }

    void difference(const Complex &c2) {
        real -= c2.real;
        imaginary -= c2.imaginary;
    }

    void multiply(const Complex &c2) {
        const int k = real;
        real = (real*c2.real) + (imaginary*c2.imaginary);
        imaginary = (k*c2.imaginary) + (imaginary*c2.real);

    }

    void print()
    {
        cout << real << " + i(" << imaginary << ")\n";  
    }

};

int main()
{
    int i1,i2,r1,r2;
    cout << "Enter Real and Imaginary parts of first number: ";
    cin >> r1 >> i1;
    cout << "Enter Real and Imaginary parts of second number: ";
    cin >> r2 >> i2;
    Complex c1(i1,r1);
    Complex c2(i2,r2);

    c1.add(c2);
    c1.print();
    c1.difference(c2);
    c1.print();
    c1.multiply(c2);
    c1.print();




    return 0;
}