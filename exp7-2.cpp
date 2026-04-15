#include <iostream>
using namespace std;

class Test {
private:
    int x = 10;

public:
    friend void show(Test t);
};

void show(Test t) {
    cout << t.x;
}

int main() {
    Test t;
    show(t);
    return 0;
}