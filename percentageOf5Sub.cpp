#include<iostream>
using namespace std;
int main()
{
    int hindi,eng,maths,sci,eco,percentage;
    cout<<"enter hindi marks: ";
    cin>>hindi;
    cout<<"enter eng marks: ";
    cin>>eng;
    cout<<"enter maths marks: ";
    cin>>maths;
    cout<<"enter sci marks: ";
    cin>>sci;
    cout<<"enter eco marks: ";
    cin>>eco;
    percentage=(((hindi+eng+maths+sci+eco)*100)/500);
    cout<<"the percentage of a student is: "<<percentage<<" %";
    return 0;
}