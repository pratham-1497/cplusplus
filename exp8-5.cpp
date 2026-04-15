#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    friend istream& operator>>(istream& in, Complex& c) {
        in >> c.real >> c.imag;
        return in;
    }

    friend ostream& operator<<(ostream& out, Complex& c) {
        out << c.real << "+" << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c;
    cin >> c;
    cout << c;
    return 0;
}