#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int l;
    cin>>l;
    int arr[l];
    int arrb[l+1];
    forl(i,0,l) cin>>arr[i];
    forl(i,0,l+1) cin>>arrb[i];
    int ans=1;
    int z=arrb[l];
    int m=INT64_MAX;
    forl(i,0,l) {
        if((z>=arr[i] && z<=arrb[i]) || (z<=arr[i] && z>=arrb[i])) m=0;
        m=min(m,abs(arr[i]-z));
        m=min(m,abs(arrb[i]-z));
        ans+=abs(arr[i]-arrb[i]);
    }
    cout<<ans+m<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}