#include<iostream>
using namespace std;
int main()
{
    int a=90,b=0;
    try
    {
        if(b==0)
        {
            throw "Not Divisible By Zero!";
        }
        cout<<a/b;
    }
    catch(const char * msg)
    {
       cout<<"Exception Caught! :"<<msg<<endl;
    }
    
}