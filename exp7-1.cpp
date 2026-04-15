#include <iostream>
using namespace std;

class Test {
private:
    int x = 10;
};

int main() {
    Test t;
    cout << "Cannot access private member directly";
    return 0;
}