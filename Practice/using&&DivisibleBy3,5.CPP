#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    if((n%3==0)&&(n%5==0))
    {
        cout<<"yes,it divisible  "<<endl;
    }
    else
    {
        cout<<"no,it is not divisible ";
    }
    return 0;
}