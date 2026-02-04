#include <iostream>
using namespace std;

float areaTriangle(float b, float h)
{
    return 0.5 * b * h;
}

float areaCircle(float r)
{
    return 3.14159 * r * r;
}

int main()
{
    float b, h, r;
    cout << "enter value :";
    cin >> b >> h;
    cin >> r;
    cout << areaTriangle(b, h) << endl;
    cout << areaCircle(r);
    return 0;
}
