#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    void input() {
        cin >> real >> imag;
    }

    Complex multiply(Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    void display() {
        cout << real << "+" << imag << "i";
    }
};

int main() {
    Complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1.multiply(c2);
    c3.display();
    return 0;
}