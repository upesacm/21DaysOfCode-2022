#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,i;
        cin>>a>>b;
        for(i=0;i<1000;i++)
        {
            if(a>=0 && b>=0)
            {
                if(i%2!=0)
                {
                    a-=i;
                }
                else
                {
                    b-=i;
                }
            }
            else
            {
                break;
            }
        }
        if(a>b)
        {
            cout<<"Limak"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }
}