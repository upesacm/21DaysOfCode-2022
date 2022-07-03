#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        int w,h,p,area=0,flag=0;
        for(int i=0;i<n;i++)
        {
            int w,h,p;
            cin>>w>>h>>p; 
            if(p<=b)
            {
                if(area<w*h)
                {
                    area=w*h;
                    flag=1;
                }
                else
                {
                    continue;
                }
            }
        }
        if(flag==1)
        {
            cout<<area<<endl;
        }
        else
        {
            cout<<"no tablet"<<endl;
        }
    }    
}