#include <iostream>
using namespace std;

float area(float b, float h){ return 0.5*b*h; }
float area(float r){ return 3.14*r*r; }

int main(){
    cout<<"Triangle Area: "<<area(10,5)<<endl;
    cout<<"Circle Area: "<<area(7)<<endl;
    return 0;
}