#include <iostream>
using namespace std;

int main() {
	int T;
    int X, Y, A;
    cin>>T;
    while (T--){
        cin>>X>>Y>>A;
        if(A>=X && A<Y){
            cout<<"YES"<<"\n";
        } else{
            cout<<"NO"<<"\n";
        }
    }
	return 0;
}
