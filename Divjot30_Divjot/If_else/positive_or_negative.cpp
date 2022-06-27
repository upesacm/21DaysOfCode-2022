#include<iostream>
using namespace std;
int main()
{
   int num; 
   cout<<"Enter an integer number";
   cin>>num;
   if(num>0)
   {
      cout<<"Positive number\n" ;
      if(num<10)
      {
          cout<<"One digit number";
      }
      else if(num<100)
      {
          cout<<"Two digit number";
      }
      else if(num<1000)
      {
          cout<<"Three digit number";
      }
   }
   else
   {
     cout<<"Negative Number"; 
   }
}