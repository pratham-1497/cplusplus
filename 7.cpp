#include <iostream>
using namespace std;

class SwapNumbers
{
    int a, b;

public:
    void input()
    {
        cout << "entre 2 numbers :";
        cin >> a >> b;
    }

    void swapNumbers()
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void display()
    {
        cout << a << " " << b;
    }
};

int main()
{
    SwapNumbers s;
    s.input();
    s.swapNumbers();
    s.display();
    return 0;
}
