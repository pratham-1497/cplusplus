#include <iostream>
using namespace std;

class Print{
public:
    int n;
    void get(){ cin>>n; }
    void show(){
        for(int i=1;i<=n;i++) cout<<i<<" ";
    }
};

int main(){
    Print p;
    p.get();
    p.show();
}