#include <iostream>
using namespace std;

int main() {
    string item1 = "Burger", item2 = "Pizza", item3 = "Cold Drink";
    float price1 = 120, price2 = 250, price3 = 60;

    float total = price1 + price2 + price3;

    cout << "\n------ HOTEL BILL ------" << endl;
    cout << "Item\t\tPrice" << endl;
    cout << "------------------------" << endl;
    cout << item1 << "\t\t₹" << price1 << endl;
    cout << item2 << "\t\t₹" << price2 << endl;
    cout << item3 << "\t\t₹" << price3 << endl;
    cout << "------------------------" << endl;
    cout << "Total\t\t₹" << total << endl;

    return 0;
}