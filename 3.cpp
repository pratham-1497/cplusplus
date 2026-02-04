#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i;
    cout << "Enter a natural number";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum;

    return 0;
}
