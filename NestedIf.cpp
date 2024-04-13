#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the value "<<endl;
    cin>>marks;
    if(marks>35)
    {
        if(marks<=100)
        cout<<"passing one"<<endl;
    }
    else
    {
        cout<<"fail";
    }
}