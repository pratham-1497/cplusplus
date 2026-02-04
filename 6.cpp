#include <iostream>
using namespace std;

class Prime
{
    int n, i, flag;

public:
    void get()
    {
        cout << "enter a number";
        cin >> n;
    }

    void check()
    {
        flag = 0;

        if (n <= 1)
            flag = 1;

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }
        }

        if (flag == 0)
            cout << "Prime";
        else
            cout << "Not Prime";
    }
};

int main()
{
    Prime p;

    p.get();

    p.check();

    return 0;
}
