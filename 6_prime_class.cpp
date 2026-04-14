#include <iostream>
using namespace std;

class Prime{
public:
    int n;
    void get(){ cin>>n; }
    void check(){
        int flag=1;
        if(n<=1) flag=0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){ flag=0; break; }
        }
        cout<<(flag?"Prime":"Not Prime");
    }
};

int main(){
    Prime p;
    p.get();
    p.check();
}