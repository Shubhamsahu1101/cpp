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
    int a,b;
    multiset<int> m;
    vector<int> v1(l);
    vector<int> v2(l);
    forl(i,0,l){
        cin>>a>>b;
        v1[i]=a;
        v2[i]=b;
        m.insert(a);
        m.insert(b);
    }
    forall(it,m){
        cout<<*it<<" ";
    }cout<<endl;
    forl(i,0,l){
        auto it1=m.find(v1[i]);
        auto it2=m.find(v2[i]);
        if(next(it1)==it2) cout<<0<<" ";
        else cout<<1<<" ";
    }cout<<endl;
    // forl(i,0,l){
    //     auto it1=m.find(v1[i]);
    //     auto it2=m.find(v2[i]);
    //     int y=it1-m.begin();
    //     int z=m.end()-it2;
    //     if(y>0 && z>0) cout<<1<<" ";
    //     else cout<<0<<" ";
    // }
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