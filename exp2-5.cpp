#include <iostream>
using namespace std;

int main() {
    int tableNo;
    string name, mobile;

    string item1, item2, item3;
    float price1, price2, price3;

    float total, discount = 0, finalAmount;

    cout << "Enter Table Number: ";
    cin >> tableNo;
    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Mobile Number: ";
    cin >> mobile;

    cout << "\nEnter Item 1 Name and Price: ";
    cin >> item1 >> price1;

    cout << "Enter Item 2 Name and Price: ";
    cin >> item2 >> price2;

    cout << "Enter Item 3 Name and Price: ";
    cin >> item3 >> price3;

    total = price1 + price2 + price3;

    if (total > 1000) {
        discount = total * 0.10;
    }

    finalAmount = total - discount;

    cout << "\n=========== HOTEL BILL ===========" << endl;
    cout << "Table No : " << tableNo << endl;
    cout << "Name     : " << name << endl;
    cout << "Mobile   : " << mobile << endl;

    cout << "\nItem\t\tPrice" << endl;
    cout << "---------------------------------" << endl;
    cout << item1 << "\t\t₹" << price1 << endl;
    cout << item2 << "\t\t₹" << price2 << endl;
    cout << item3 << "\t\t₹" << price3 << endl;

    cout << "---------------------------------" << endl;
    cout << "Total        : ₹" << total << endl;
    cout << "Discount     : ₹" << discount << endl;
    cout << "Final Amount : ₹" << finalAmount << endl;
    cout << "=================================" << endl;

    return 0;
}