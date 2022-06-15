#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int X, Y;
    int diff;
    for(int i = 0; i<T; i++){
        cin>>X>>Y;
        diff = X-Y;
        if(diff>0){
            cout<<diff<<"\n";
        }else{
            cout<<0<<"\n";
        }

    }
	return 0;
}
