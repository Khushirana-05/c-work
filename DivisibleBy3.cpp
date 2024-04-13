#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    if(n%3==0)
    {
        cout<<"yes, it is divisible by 3"<<endl;
    }
    else
    {
        cout<<"No, it is not divisible by 3";
    }
    return 0;
}