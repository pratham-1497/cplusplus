#include <iostream>
using namespace std;

class Bill{
public:
    float units,amount;
    void get(){ cin>>units; }
    void calc(){
        amount=units*5;
        amount=amount - amount*0.02;
        cout<<"Bill="<<amount;
    }
};

int main(){
    Bill b;
    b.get();
    b.calc();
}