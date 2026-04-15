#include <iostream>
using namespace std;

int main() {
    string name;
    string mobile;

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Mobile Number: ";
    cin >> mobile;

    cout << "\n----- Customer Details -----" << endl;
    cout << "Name   : " << name << endl;
    cout << "Mobile : " << mobile << endl;

    return 0;
}