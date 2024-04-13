#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n>99 && n<1000)
    {
        cout<<n<<" is a three digit number"<<endl;
    }
    else
    {
        cout<<n<<" is not a three digit number";
    }
    return 0;
} 