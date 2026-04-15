#include <iostream>
using namespace std;

class Student {
public:
    float m1, m2, m3;

    void input() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

int main() {
    Student s;
    s.input();
    return 0;
}