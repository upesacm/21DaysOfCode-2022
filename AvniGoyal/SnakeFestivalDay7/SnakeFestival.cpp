#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,c,i,n;
	cin>>t;
	while(t-->0)
	{
	    c=0;
	    int n;
	    cin>>n;
	    char a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
        for(i=0;i<n;i++)
        {
            if(a[i]!='.'&&(c==0||c==1))
            {
                if(a[i]=='H')
                {
                    c++;
                }
                else
                {
                    c--;
                }
            }
            
        }
        if(c==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
	}
	return 0;
}