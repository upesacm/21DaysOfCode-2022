#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int X, Y, Z;
    while(T--){
        cin>>X>>Y>>Z;
        int output;
        output = ((5*X)+(10*Y))/Z;
        cout<<output<<endl;
    }
	return 0;
}
