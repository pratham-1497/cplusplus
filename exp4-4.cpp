#include <iostream>
using namespace std;

class Patient {
public:
    string name;
    int age;

    void input() {
        cout << "Enter Patient Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "\n----- Patient Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main() {
    Patient p;
    p.input();
    p.display();
    return 0;
}