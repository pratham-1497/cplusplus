#include <iostream>
using namespace std;

class Patient {
public:
    string name, appointmentDate;
    int age;
    float billAmount;

    void input() {
        cout << "Enter Patient Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Appointment Date: ";
        getline(cin, appointmentDate);

        cout << "Enter Billing Amount: ";
        cin >> billAmount;
    }

    void display() {
        cout << "\n======= Patient Details =======" << endl;
        cout << "Name            : " << name << endl;
        cout << "Age             : " << age << endl;
        cout << "Appointment Date: " << appointmentDate << endl;
        cout << "Bill Amount     : ₹" << billAmount << endl;
        cout << "===============================" << endl;
    }
};

int main() {
    Patient p;
    p.input();
    p.display();
    return 0;
}