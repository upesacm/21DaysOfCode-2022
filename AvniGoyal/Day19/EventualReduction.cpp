#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int freq[26]={0};
        int flag=0;
        for(int i=0;i<26;i++)
        {
            freq[s[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]%2!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}