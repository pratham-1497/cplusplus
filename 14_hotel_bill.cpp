#include <iostream>
using namespace std;

int main(){
    int table, n;
    string name, contact;
    float total=0;

    cin>>table>>name>>contact>>n;

    for(int i=0;i<n;i++){
        string item; int qty; float price;
        cin>>item>>qty>>price;
        total += qty*price;
    }

    float discount=0;
    if(total>5000) discount=0.2*total;
    else if(total>3000) discount=0.1*total;
    else if(total>1000) discount=0.05*total;

    cout<<"Total="<<total<<endl;
    cout<<"Discount="<<discount<<endl;
    cout<<"Final="<<total-discount;
}