//Problem statement: https://codeforces.com/contest/1699/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
const ll N= 1e5;
 
const ll mod = 1e9+7;
 
ll  p[N], mn, mx;
 
ll ans;
ll solve(ll a[] , ll n){
 
    ans=1;
 
    for (ll i=0;i<n;i++) {
        p[a[i]] = i;
    }
    mn=mx=p[0];
    for (ll i=1;i<n;i++){
        if(p[i]>mx) {
            mx =p[i];
        }
        else if(p[i]<mn) {
            mn =p[i];
        }
        else {
            ans = ans * (mx-mn+1-i)%mod;
        }
 
    }
 
    return ans ;
 
}
int main(){
    ll t ;
    cin>>t ;
    while(t--){
        ll n ;
        cin>>n;
        ll a[n] ;
        for(ll i = 0 ;i< n ;i++){
            cin>>a[i];
        }
        ll ans = solve(a , n);
        cout<<ans<<endl;
    }
}