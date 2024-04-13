#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age: "<<endl;
    cin>>age;
    if(age<=12)
    {
        cout<<"this is child"<<endl;
    }
    else if(age<=18)
    {
        cout<<"this is teenager"<<endl;
    }
    else
    {
        cout<<"this is adult";
    }
    return 0;
}