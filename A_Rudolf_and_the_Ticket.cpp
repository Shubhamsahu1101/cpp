#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    int arr1[n];
    int arr2[m];
    forl(i,0,n) cin>>arr1[i];
    forl(i,0,m) cin>>arr2[i];
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int ans=0;
    forl(i,0,n){
        forl(j,0,m){
            if(arr1[i]+arr2[j]<=k){
                ans++;
            }
        }
    }
    // forl(i,0,m){
    //     int x = lower_bound(arr1,arr1+n,k-arr2[i]) - arr1;
    //     ans+=x;
    // }
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