#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int K, X;
    while(T--){
        cin>>K>>X;
        // calculating the numbers of days in K
        int weeks;
        weeks = K*7;

        int output;
        output = weeks - X;
        cout<<output<<"\n";
    }
	return 0;
}
