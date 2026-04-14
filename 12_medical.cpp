#include <iostream>
using namespace std;

class Medical{
public:
    float bill;
    Medical(float b){ bill=b; }
    void show(){ cout<<"Bill="<<bill; }
};

int main(){
    Medical m(1500);
    m.show();
}