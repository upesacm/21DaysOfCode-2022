#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int X, Y;
	while(T--){
		cin>>X>>Y;
		int output;
		output = X-Y;
		if(output < 0)
		cout<<-(output)<<endl;
		else
		cout<<output<<endl;
	}
	return 0;
}
