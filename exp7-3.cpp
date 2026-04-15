#include <iostream>
using namespace std;

class Demo {
private:
    int a;

public:
    Demo() { a = 25; }
    friend void display(Demo d);
};

void display(Demo d) {
    cout << d.a;
}

int main() {
    Demo d;
    display(d);
    return 0;
}