#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks"<<endl;
    cin>>marks;
    if((marks>=90)&&(marks<=100))
    {
        cout<<"A++ grade"<<endl;
    }
    else if((marks>=80)&&(marks<90))
    {
        cout<<"A+ grade"<<endl;
    }
    else if((marks<=80)&&(marks>70))
    {
        cout<<"B++ grade"<<endl;
    }    
    else if((marks>=70)&&(marks<60))
    {
        cout<<"B grade"<<endl;
    }
    else
    {
        cout<<"fail";
    }
    return 0;
}