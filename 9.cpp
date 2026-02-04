#include <iostream>
using namespace std;

class LeapYear
{
    int year;

public:
    void input()
    {
        cout << "Enter A year:";
        cin >> year;
    }

    void check()
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            cout << "Leap Year";
        else
            cout << "Not Leap Year";
    }
};

int main()
{
    LeapYear y;
    y.input();
    y.check();
    return 0;
}
