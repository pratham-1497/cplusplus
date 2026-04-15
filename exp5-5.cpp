#include <iostream>
using namespace std;

inline int add(int a, int b) { return a + b; }
inline int sub(int a, int b) { return a - b; }
inline int mul(int a, int b) { return a * b; }
inline float divi(int a, int b) { return (float)a / b; }

int main()
{
    int x, y;
    cin >> x >> y;

    cout << add(x, y) << endl;
    cout << sub(x, y) << endl;
    cout << mul(x, y) << endl;
    cout << divi(x, y);

    return 0;
}