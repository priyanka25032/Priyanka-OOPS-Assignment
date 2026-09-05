#include<iostream>
using namespace std;
class Complex {
    float real, imaginary;
    public:
    Complex() {
        real=3;
        imaginary=4;
    }
    Complex(float r, float i) {
        real=r;
        imaginary=i;
    }
    void display() {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
int main() {
    Complex c1;
    Complex c2(2,5);
    c1.display();
    c2.display();
    return 0;
}