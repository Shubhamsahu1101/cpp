#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    int ch[k];
    forl(i,0,n) cin>>arr[i];
    forl(i,0,k) cin>>ch[i];
    // forl(i,0,k) cout<<ch[i]<<" ";
    // cout<<endl;
    
    int x=arr[0];
    // cout<<"x:   "<<x<<endl;
    forl(i,0,k){
        int z=ch[i];
        cout<<min(z,x-1)<<" ";
    }cout<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}