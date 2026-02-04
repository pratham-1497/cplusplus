#include <iostream>
using namespace std;

class ElectricityBill
{
private:

    float units, bill;

public:
    void calculate()
    {
        cout << "Enter no. of units: \n";
        cin >> units;
        bill = units * 5;
        bill = bill - (bill * 0.02);
        cout << bill;
    }
};

int main()
{
    ElectricityBill e;
    e.calculate();
    return 0;
}
