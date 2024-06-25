#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int l;
    cin>>l;
    int t,tsum=0;
    map<int,int> m;
    forl(i,0,l){
        cin>>t;
        m[t]++;
        tsum+=t;
    }
    // forall(it,m){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    vector<int> v(m.size()+1,0);
    vector<int> p(m.size()+1,0);
    vector<int> n(m.size()+1,0);
    auto it=m.begin();
    int i=1;
    while(it!=m.end()){
        v[i]=it->first;
        p[i]=p[i-1]+it->first*it->second;
        n[i]=it->second+n[i-1];
        it++;i++;
    }
    v.pb(0);p.pb(0);n.pb(0);
    int ans=INT64_MAX;
    int c=0;
    // print(v);
    // print(p);
    // print(n);
    forl(i,1,m.size()+1){
        c=abs(p[i-1]-(n[i-1]*v[i]))+abs((tsum-p[i])-((l-n[i])*v[i]));
        // cout<<c<<endl;
        ans=min(ans,c);
    }
    cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}