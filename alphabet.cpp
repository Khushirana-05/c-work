#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"enter the character "<<endl;
    cin>>alphabet;
    if((alphabet>='a'&& alphabet<='z')||(alphabet>='A'&& alphabet<='Z'))
    {
        cout<<alphabet<<" is a character"<<endl;
    }
    else
    {
        cout<<alphabet<<" is not a character";
    }
    return 0;
}