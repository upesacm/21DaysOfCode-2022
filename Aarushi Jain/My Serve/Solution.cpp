#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int P, Q;
	while(T--){
		cin>>P>>Q;
		if(((P+Q)/2)%2 == 0)
		cout<<"ALICE"<<endl;
		else
		cout<<"BOB"<<endl;
	}
	return 0;
}
