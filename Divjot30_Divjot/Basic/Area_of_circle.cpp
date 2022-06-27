#include<iostream>
using namespace std;
int main()
{
    const double pi= 3.14;
    int rad;
    cout<<"Please enter the radius";
    cin>>rad;
    double area;
    area = pi*rad*rad;
    cout<<"Area of circle is"<<area;
}