#include <iostream>
using namespace std;

int main() {
    float item1, item2, item3, total;

    cout << "Enter price of item 1: ";
    cin >> item1;

    cout << "Enter price of item 2: ";
    cin >> item2;

    cout << "Enter price of item 3: ";
    cin >> item3;

    total = item1 + item2 + item3;

    cout << "Total Amount = ₹" << total << endl;

    return 0;
}