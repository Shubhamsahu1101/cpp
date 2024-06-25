#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define ll long long
using namespace std;

void solve() {
    ll n,l;
    cin>>n>>l;
    vector<vector<ll>> v(l, vector<ll>(n));
    forl(i,0,n){
        forl(j,0,l){
            cin>>v[j][i];
        }
    }
    // forl(i,0,l){
    //     forl(j,0,n){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    ll ans=0;
    forl(i,0,l){
        sort(v[i].begin(),v[i].end());
        ll x = accumulate(v[i].begin(),v[i].end(),(ll)0);
        forl(j,0,n){
            ans+=(x-((v[i][j])*(n-j)));
            x-=v[i][j];
            // cout<<v[i][j]<<" "<<x<<" "<<(n-j)<<" "<<ans<<endl;
        }
        // cout<<x<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}