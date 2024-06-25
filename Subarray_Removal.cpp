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
    int t;
    map<int,int,greater<int>> m;
    forl(i,0,l){
        cin>>t;
        m[t]=i;
    }
    // forall(it,m){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    set<int> s;
    int ans=0;
    forall(it,m){
        s.insert(it->second);
        // cout<<*(--s.end())-*s.begin()+1<<"  s  "<<s.size()<<endl;
        if(*(--s.end())-*s.begin()+1==s.size() && s.size()>ans && s.size()<l) ans=s.size();
        // print(s);
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