#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    while(T--){
        int A, B;
        cin>>A>>B;
        int ans;
        ans = min(A, B);
        cout<<ans<<"\n";
    }
	return 0;
}
