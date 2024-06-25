#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    int t;
    vector<pair<int,int>> v;
    vector<pair<int,int>> ans;
    forl(i,0,l){
        cin>>t;
        v.push_back({t,i});
    }
    sort(v.begin(),v.end());
                // forall(it,v){
                //     cout<<it->first<<" "<<it->second<<endl;
                // }cout<<endl;
                // cout<<endl;

    forl(i,0,l){
        if(i!=v[i].second){
            // cout<<i+1<<" "<<v[i].second+1<<endl;
            // cout<<v[i].second+1<<" "<<i+1<<endl;
            // cout<<i+1<<" "<<v[i].second+1<<endl;
            ans.push_back({i+1,v[i].second+1});
            ans.push_back({v[i].second+1,i+1});
            ans.push_back({i+1,v[i].second+1});
        }
        int z1=v[i].second;
        int z2=v[v[i].second].second;
        v[i].second=z2;
        v[z1].second=z1;
                //     forall(it,v){
                //     cout<<it->first<<" "<<it->second<<endl;
                // }cout<<endl;
                // cout<<endl;
    }
    cout<<ans.size()<<endl;
    forall(it,ans){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
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