#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three integer numbers";
    cin>>a>>b>>c;
    if(a>b)
    {
      if(a>c)
      {
       cout<<"Largest number is"<<a ;  
      } 
      else
      cout<<"Largest number is"<<c;
    }
    else
    {
      if(b>c)//here, we have assumed that a is smaller than b, because the previous if condition is not true.
      {
          cout<<"Largest number is"<<b;
      }  
      else
      cout<<"Largest number is"<<c;
    }
}