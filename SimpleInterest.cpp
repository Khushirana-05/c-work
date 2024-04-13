#include<iostream>
using namespace std;
int main()
{
    int  si,p,r,t;
    cout<<"enter principle: ";
    cin>>p;
    cout<<"enter rate: ";
    cin>>r;
    cout<<"enter time: ";
    cin>>t;
    si=((p*r*t)/100);
    cout<<"the simple interest is: "<<si;
    return 0;
}