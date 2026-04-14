#include <iostream>
using namespace std;

class Student{
public:
    string name; int roll;
    void get(){ cin>>name>>roll; }
    void show(){ cout<<name<<" "<<roll<<endl; }
};

int main(){
    Student s[3];
    for(int i=0;i<3;i++) s[i].get();
    for(int i=0;i<3;i++) s[i].show();
}