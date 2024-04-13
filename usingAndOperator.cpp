#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value: "<<endl;
    cin>>n;
    if((n%3==0)&&(n%5==0))
    {
      cout<<"yes, it is divisible "<<endl;
    }
    else
    {
        cout<<"no, it is not divisible ";
    }
    return 0;
}