#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int total=0; // while declaring a variable, mentioning the data type is mandatory
    int i=0;
    float percentage = 0.0;
    for(i=0;i<5;i++)
    {
    cout<<"Enter the marks of subject"<<(i+1)<<":";
    cin>>marks[i];
    }
    for(i=0;i<5;i++)
    {
        total+= marks[i];
        percentage= total/5;
    }
    cout<<endl<<"total marks obtained:"<< total;
    cout<<endl<<"percentage obtained:"<< percentage<<"%";
}