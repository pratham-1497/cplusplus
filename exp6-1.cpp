#include <iostream>
using namespace std;

class Demo {
public:
    static int value;
};

int Demo::value = 0;

int main() {
    Demo d1, d2;

    d1.value = 10;

    cout << "Value from d1: " << d1.value << endl;
    cout << "Value from d2: " << d2.value << endl;

    return 0;
}