#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << "+" << imag << "i";
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}