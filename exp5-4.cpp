#include <iostream>
using namespace std;

class Calculator {
public:
    inline int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum = " << c.add(x, y) << endl;

    return 0;
}