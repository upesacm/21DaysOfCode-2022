#include<iostream> // for input and output
 
using namespace std; //to avoid using std:: before every cin and cout
int main() //main function(from where the execution starts)
{
int a,b,c,avg; //veriable declaration
cout<<"Enter the value of a";
cin>>a;
cout<<"Enter the value of b";
cin>>b;
cout<<"Enter the value of c";
cin>>c;
avg = (a+b+c)/3;
cout<<"Average is";
cout<<avg;	
}