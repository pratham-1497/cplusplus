#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float m1, m2, m3;

    void input() {
        cout << "\nEnter Student Name: ";
        cin >> name;

        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    float total() {
        return m1 + m2 + m3;
    }

    float percentage() {
        return total() / 3;
    }

    void display() {
        cout << "\nName   : " << name << endl;
        cout << "Total  : " << total() << endl;
        cout << "Percent: " << percentage() << "%" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];  // array of objects

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    cout << "\n===== Student Records =====" << endl;

    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    return 0;
}