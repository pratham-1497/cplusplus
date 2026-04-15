#include <iostream>
using namespace std;

class Test {
public:
    static int num;
};

int Test::num = 50;

int main() {
    Test t1, t2;

    cout << "Access using t1: " << t1.num << endl;
    cout << "Access using t2: " << t2.num << endl;

    return 0;
}