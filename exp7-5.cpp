#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    friend void display(Student s);
};

void display(Student s) {
    cout << s.roll << endl;
    cout << s.name;
}

int main() {
    Student s(1, "Prathamesh");
    display(s);
    return 0;
}