#include <iostream>
using namespace std;

class Palindrome
{
    int num, temp, rev;

public:
    inline void input()
    {
        cin >> num;
    }

    inline void check()
    {
        temp = num;
        rev = 0;

        while (temp > 0)
        {
            rev = rev * 10 + (temp % 10);
            temp = temp / 10;
        }

        if (rev == num)
            cout << "Palindrome";
        else
            cout << "Not Palindrome";
    }
};

int main()
{
    Palindrome p;
    p.input();
    p.check();
    return 0;
}
