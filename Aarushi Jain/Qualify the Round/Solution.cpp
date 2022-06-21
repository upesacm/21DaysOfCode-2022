#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int X, A, B;
    while(T--){
        cin>>X>>A>>B;
        if(A+2*B >= X)
        cout<<"Qualify"<<endl;
        else
        cout<<"NotQualify"<<endl;
    }
	return 0;
}
