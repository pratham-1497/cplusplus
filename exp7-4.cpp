#include <iostream>
using namespace std;

class Number {
private:
    int x, y;

public:
    Number(int a, int b) {
        x = a;
        y = b;
    }

    friend int add(Number n);
};

int add(Number n) {
    return n.x + n.y;
}

int main() {
    Number n(10, 20);
    cout << add(n);
    return 0;
}