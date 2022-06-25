#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    int r = 0;
	    for(int i = 0; i<n;i++){
	        int q;
	        cin>>q;
	        r = r ^ q;
	        
	    }
	    cout<<r<<endl;
	    
	}
	return 0;
}