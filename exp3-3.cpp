#include <iostream>
using namespace std;

class Student {
public:
    float m1, m2, m3;

    void input() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    float total() {
        return m1 + m2 + m3;
    }

    float percentage() {
        return total() / 3;
    }
};

int main() {
    Student s;
    s.input();

    cout << "Total = " << s.total() << endl;
    cout << "Percentage = " << s.percentage() << "%" << endl;

    return 0;
}