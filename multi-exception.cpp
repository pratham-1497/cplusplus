#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'A';
    }
    catch(int x)
    {
        cout<<"Integer Exception"<<x<<endl;
    }
    catch(float x)
    {
        cout<<"Float Exception"<<x<<endl;
    }
    catch(double x)
    {
        cout<<"Double Exception"<<x<<endl;
    }catch(...)
    {
        cout<<"Invaild Error!"<<endl;
    }
}

