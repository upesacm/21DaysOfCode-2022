#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int X, Y, Z;
    while (T--){
        cin>>X>>Y>>Z;
        if(Z>=X){
            if(Z-X>=Y){
                cout<<"2"<<endl;
                continue;
            }
            cout<<"1"<<endl;
            continue;
        }else{
            cout<<"0"<<endl;
        }
    }
	return 0;
}
