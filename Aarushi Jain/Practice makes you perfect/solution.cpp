#include <iostream>
using namespace std;

int main() {
	int P1, P2, P3, P4;
    cin>>P1>>P2>>P3>>P4;
    int sum = 0;
    int P[4] = {P1, P2, P3, P4};
    int arrSize = sizeof(P)/sizeof(P[0]);
    for(int i = 0; i<arrSize; i++){
        if (P[i] >= 10){
            sum++;
        }
    }
    cout<<sum<<"\n";
	return 0;
}
