#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int l,t;
    cin>>l;
    map<int,vector<int>> mp;
    forl(i,0,l){
        cin>>t;
        mp[t].pb(i);
    }
    int smax=INT64_MIN,emax=INT64_MIN,ans=-1;
    forall(it,mp){
        forl(i,1,it->second.size()){
            smax=min(it->second[i],it->second[i-1]);
            emax=min(l-it->second[i],l-it->second[i-1]);
            // cout<<it->second[i-1]<<it->second[i]<<" "<<smax<<" "<<emax<<endl;
            ans=max(ans,smax+emax);
        }
    }
    cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}
