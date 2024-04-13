#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 1st no."<<endl;
    cin>>a;
    cout<<"enter 2nd no."<<endl;
    cin>>b;
    cout<<"enter 3rd no."<<endl;
    cin>>c;
    if((a==b)&&(b==c))
    {
        cout<<"this is an equilateral triangle"<<endl;
    }
    else if((a==b)||(b==c)||(c==a))
    {
        cout<<"this is an isosceles triangle"<<endl;
    }
    else
    {
        cout<<"this is a scalane triangle";
    }
    return 0;
}