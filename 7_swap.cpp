#include <iostream>
using namespace std;

class Swap{
public:
    int a,b;
    void get(){ cin>>a>>b; }
    void show(){
        int temp=a; a=b; b=temp;
        cout<<a<<" "<<b;
    }
};

int main(){
    Swap s;
    s.get();
    s.show();
}