#include <iostream>
using namespace std;

int main() {
    float total, discount = 0, finalAmount;

    cout << "Enter total bill amount: ";
    cin >> total;

    if (total > 1000) {
        discount = total * 0.10;
    }

    finalAmount = total - discount;

    cout << "Discount = ₹" << discount << endl;
    cout << "Final Payable Amount = ₹" << finalAmount << endl;

    return 0;
}