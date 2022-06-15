#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x%6==0)
	   {
	    cout<<((x/6)*y)<<endl;
	   }
	    else
	    {
	         cout<<(x/6+1)*y<<endl;
	    }
	   
	}
	return 0;
}