#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int a, b;
    cin>>a>>b;
    string s;
    cin>>s;
    map<char, int> m;
    forl(i,0,a){
        m[s.at(i)]++;
    }
    int ans=0;
    for(int i=65; i<72; i++) {
        if(m[char(i)]<b){
            ans+=(b-m[char(i)]);
        }
        // cout<<char(i)<<m[char(i)]<<endl;
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