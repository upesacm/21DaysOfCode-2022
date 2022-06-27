#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    while(T--){
        int N, K;
        cin>>N>>K;
        int Tgroups = (N/5)+(N%5 == 0?0:1); // total number of groups
        int Ngroups = (K/5)+(K%5 == 0?0:1); // determining the group of the candidate that left

        cout<<Tgroups - Ngroups<<"\n";
    }
	return 0;
}
