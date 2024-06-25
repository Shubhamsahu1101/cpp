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
    int n,q,t;
    cin>>n>>q;
    map<int,int> mp;
    forl(i,1,n+1){
        cin>>t;
        mp[i]=t;
    }
    int t1,t2;
    forl(i,0,q){
        cin>>t;
        auto it=mp.begin();
        
        while(it->second!=t){
            t2=it->second;
            it->second=t1;
            t1=t2;
            it++;
        }
        t2=it->second;
        it->second=t1;
        t1=t2;
        it++;
        
        mp.begin()->second=t;
        
        cout<<distance(mp.begin(), it)<<" ";
    }
    cout<<endl;
    
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