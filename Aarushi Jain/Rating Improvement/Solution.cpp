#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int X, Y;
    while(T--){
        cin>>X>>Y;
        if(Y>= X && Y<=X+200){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
