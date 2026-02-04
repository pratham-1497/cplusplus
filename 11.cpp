#include <iostream>
using namespace std;

class Sum
{
    int n;

public:
    void getn()
    {
        cout << "Enter Number : ";
        cin >> n;
    }

    int calSum()
    {
        return n * (n + 1) / 2;
    }
};

int main()
{
    Sum s;
    s.getn();
    cout << "Sum = " << s.calSum() << endl;
    return 0;
}
