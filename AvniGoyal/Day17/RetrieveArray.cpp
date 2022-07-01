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
        long long int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long int sumb=0,suma=0;
        for(int i=0;i<n;i++)
        {
            sumb+=b[i];
        }
        suma=sumb/(n+1);
        for(int i=0;i<n;i++)
        {
            cout<<b[i]-suma<<endl;
        }
    }
    return 0;
}