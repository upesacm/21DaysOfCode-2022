#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> vl;
    
    for(int i = 0; i < n; i ++)
    {
        int a, b;
        a = b = -1;
        cin >> a;
        if(a == 1 || a == 2)
            cin >> b;
        vl.push_back(a);            
        vl.push_back(b);            
    }    
    multiset<int> uset;
    for(int i = 0; i < n; i ++)
    {
        int a = vl[i * 2];
        int b = vl[i * 2 + 1];
        
        if(a == 1)
            uset.insert(b);
        else if(a == 2)
            uset.erase(uset.find(b));
        else
            cout << (*uset.begin()) << endl;
            
    }    
    return 0;
}