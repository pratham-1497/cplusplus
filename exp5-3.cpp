#include <iostream>
using namespace std;

inline int subtract(int a, int b) {
    return a - b;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Difference = " << subtract(x, y) << endl;

    return 0;
}