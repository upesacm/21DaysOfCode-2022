#include <iostream>
using namespace std;

int main() {
	int T;
    cin>>T;
    int A, B;
    while(T--){
        cin>>A>>B;
        int i = 1;
        while(A<B){
            if(i%2 == 0){
                A+=2;
            }else{
                A+=1;
            }
            i++;
        }
        if(A==B){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}