#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    int t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b<<endl;
}