#include<iostream>
#include<bits/stdc++.h>  
using namespace std;
class complex{
    private:
    int imag,real;
    public :
    complex(){

    }
    complex (int r){
        imag =r;
        real=r;
    }
    complex(int i,int r){
        imag=r;
        real=i;
    }
    complex add(complex a,complex b){
        imag = r;
        real = i;
    }
    complex add(complex a,complex b){
        complex c;
        c.imag =a.imag+b.imag;
        c.real=a.real+b.real;
        return c;

    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    return 0;
}
int main()
{
    complex a(2,3),d;
    complex b(3,4),c;
    c=d.add(a,b);
    c.display();
}