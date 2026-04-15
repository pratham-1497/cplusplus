#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    void input() {
        cin >> real >> imag;
    }

    void display() {
        cout << real << "+" << imag << "i";
    }
};

int main() {
    Complex c;
    c.input();
    c.display();
    return 0;
}