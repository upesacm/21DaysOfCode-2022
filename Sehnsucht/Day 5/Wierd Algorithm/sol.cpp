#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    ll a;
    cin>>a;
    while(a!=1){
        cout<<a<<" ";
        if(a%2!=0){
            a=a*3+1;
        }else{
            a=a/2;
        }
        
    }
    cout<<1<<" ";
    return 0;
}