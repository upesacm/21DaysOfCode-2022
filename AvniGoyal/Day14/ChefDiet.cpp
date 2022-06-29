#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int s=0,f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]+s>=k)
            {
                s+=a[i]-k;
            }
            else
            {
                cout<<"no "<<i+1<<endl;
	            f++;
	            break;
            }
        }
        if(f==0)
        {
	        cout<<"YES"<<endl;
        }
    }
}