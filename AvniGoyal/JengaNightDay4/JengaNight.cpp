#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n==x)
        {
            cout<<"yes"<<endl;
        }
        else if(n>x)
        {
            cout<<"no"<<endl;
        }
        else if(n<x)
        {
            if(x%n==0)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        }
    }
}