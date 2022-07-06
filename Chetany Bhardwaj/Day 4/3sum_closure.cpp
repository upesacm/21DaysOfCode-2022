//Problem Statement: https://codeforces.com/contest/1698/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull  unsigned long long
 
int  main(){
    int t ;
    cin>>t ;
    while(t--){
        ll n  ;
        cin>>n;
        map<ll, ll> m;
        vector<ll> v ;
        ll a[n]  , z = 0 ;
        for(ll i = 0 ; i < n ;i++){
            cin>>a[i];
            if(a[i]==0){
                z++;
            }
            m[a[i]]++;
            if(m[a[i]]<=3){
                v.push_back(a[i]);
            }
        }
 
        if (z==n){
            cout<<"YES"<<endl;
            continue ;
        }
        sort(v.begin() , v.end());
        if((z==n-2) && v[0] == -1*v.back()){
            cout<<"YES"<<endl;
            continue ;
        }
        if(v.size() >10){
            cout << "NO" << endl;
        }
        else{
            ll l = v.size();
            bool t = true;
            for(int  i = 0 ; i< l ; ++i){
                for(int j = i+1 ; j<l ; ++j){
                    for(int k = j+1 ; k< l ; ++k){
                        if(m.count(v[i] + v[j] + v[k]) ==0){
                            t =false;
                        }
                    }
                }
            }
            if(t){cout<<"YES"<<endl;
                continue ;
            }
            else{
                cout << "NO" << endl;
            }
            }
 
    }
}