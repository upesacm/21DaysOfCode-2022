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
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       int c=0;
       for(int i=0;i<n;i++)
       {
           int prod=1,sum=0;
           for(int j=i;j>=0;j--)
           {
               prod*=a[j];
               sum+=a[j];
               if(prod==sum)
               {
                   c++;
               }
           }
       }
       cout<<c<<endl;
   }
    return 0;
}