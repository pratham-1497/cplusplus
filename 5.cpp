#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[20];
    int marks;

    void getdata()
    {
        cout << " Enter Roll , \nName , \nMarks";
        cin >> roll  >> name >> marks;
    }

    void display()
    {
        cout << roll << "\n " << name << " \n" << marks << endl;
    }
};

int main()
{
    Student s[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        s[i].getdata();
    }

    for (i = 0; i < 10; i++)
    {
        s[i].display();
    }

    return 0;
}
