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
    int arr1[l];
    int arr2[l];
    forl(i,0,l) cin>>arr1[i];
    forl(i,0,l) cin>>arr2[i];
    forl(i,0,l) arr1[i]-=arr2[i];
    multimap<int,int,greater<int>> m;
    forl(i,0,l) m.insert({arr1[i],i});
    auto it=m.begin();
    vector<int> v;
    v.push_back(it->second+1);
    int prev=it->first;
    it++;
    // forall(it,m){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    while(it!=m.end()){
        if(it->first!=prev) break;
        v.push_back(it->second+1);
        it++;
    }
    cout<<v.size()<<endl;
    print(v);
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}