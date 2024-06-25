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
bool cmp(pair<int,int> p1, pair<int,int> p2){
    if(p1.first!=p2.first){
        return p1.first>p2.first;
    }
    else{
        return p1.second<p2.second;
    }
}
void solve(){
    int n,k;
    cin>>n>>k;
    int a,b;
    map<pair<int,int>,int,decltype(&cmp)> mp(&cmp);
    forl(i,0,n){
        cin>>a>>b;
        mp[{a,b}]++;
    }
    // forall(it,mp){
    //     cout<<it->first.first<<it->first.second<<" "<<it->second<<endl;
    // }
    int r=0;
    auto it=mp.begin();
    while(it!=mp.end()){
        if(r+it->second<k){
            r+=it->second;
            it++;
        }
        else{
            cout<<(it->second)<<endl;
            break;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}