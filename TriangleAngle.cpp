#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 1st side: ";
    cin>>a;
    cout<<"enter 2nd side: ";
    cin>>b;
    cout<<"enter 3rd side: ";
    cin>>c;
    if((a==90)&&(b==90)&&(c==90))
    {
        cout<<"it is a right angle triangle"<<endl;
    }
    else if((a<90)&&(b<90)&&(c<90))
    {
        cout<<"it is an acute angle triangle"<<endl;
    }
    else if(((a>90)&&(b<90)&&(c<90))||((b>90)&&(a<90)&&(c<90))||((c>90)&&(a<90)&&(b<90)))
    {
        cout<<"it is an obtuse angle tirangle";
    }
    return 0;
}