//Problem statement: https://codeforces.com/contest/1487/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull  unsigned long long
 
int  main(){
    int t ;
    cin>>t;
    while(t--){
        ll n ;
        cin>>n;
        ll count = 0 ;
        ll a , b , c;
        for(int i = 3 ; i*i <= 2*n - 1;i+=2){
            count++;
        }
        cout<<count<<endl;
    }
}
 