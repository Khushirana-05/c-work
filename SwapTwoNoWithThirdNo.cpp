#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a ";
    cin>>a;
    cout<<"enter b ";
    cin>>b;
    c=b;
    b=a;
    a=c;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b;
    return 0;
}