#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin>>n>>m;
    int a,b,ans=0;
    int arr[n];
    fill_n(arr, n, n+1);
    forl(i,0,m) {
        cin>>a>>b;
        arr[min(a,b)-1]=min(arr[min(a,b)-1],max(a,b));
    }
    // printarr(arr);
    for(int i=n-2;i>=0;i--){
        arr[i]=min(arr[i],arr[i+1]);
    }
    // printarr(arr);
    forl(i,0,n){
        ans+=arr[i]-i-1;
    }
    cout<<ans<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}