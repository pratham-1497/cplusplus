#include <iostream>
using namespace std;

class Patient {
public:
    string name;
    int age;

    // Default Constructor
    Patient() {
        name = "Unknown";
        age = 0;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main() {
    Patient p;  // default constructor called
    p.display();
    return 0;
}