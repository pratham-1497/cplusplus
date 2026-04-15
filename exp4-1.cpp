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
};

int main() {
    Patient p;
    p.input();
    return 0;
}