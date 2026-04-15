#include <iostream>
using namespace std;

class Patient {
public:
    string name;
    int age;

    // Parameterized Constructor
    Patient(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main() {
    Patient p("Rahul", 25);
    p.display();
    return 0;
}