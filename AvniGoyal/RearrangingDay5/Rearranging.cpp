#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0' or s[i]=='5')
            {
                c++;
            }
        }
        if(c>0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}