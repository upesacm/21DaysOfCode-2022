#include <iostream>

using namespace std;
const int NMAX = 1e7+2;
long long a[NMAX];
int main()
{
    int n, b;
    cin >> n >> b;
    for(int i=1;i<=b;++i){
        int x, y, k;
        cin >> x >> y >> k;
        a[x] += k;
        a[y+1] -= k;
    }
    long long x = 0,ans=-(1LL<<60);
    for(int i=1;i<=n;++i){
        x += a[i];
        ans = max(ans,x);
    }
    cout<<ans<<"\n";
    return 0;
}