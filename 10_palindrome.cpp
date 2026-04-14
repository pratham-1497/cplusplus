#include <iostream>
using namespace std;

class Pal{
public:
    int n;
    void get(){ cin>>n; }
    inline void check(){
        int temp=n,rev=0;
        while(n>0){
            rev=rev*10+n%10;
            n/=10;
        }
        cout<<(temp==rev?"Palindrome":"Not Palindrome");
    }
};

int main(){
    Pal p;
    p.get();
    p.check();
}