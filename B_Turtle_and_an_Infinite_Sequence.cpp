#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int hsb(int num) {
    if (num == 0)
        return 0;

    int msb = 0;
    while (num != 0) {
        num >>= 1;
        msb++;
    }
    return msb-1;
}
void solve() {
    int n,m;
    cin>>n>>m;
    int z=0;
    int l=max(n-m,z);
    int r=n+m;
    while()
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}