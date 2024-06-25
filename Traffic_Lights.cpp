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
    int x,l,t;
    cin>>x>>l;
    set<int> pos;
    pos.insert(0);
    pos.insert(x);
    multiset<int> len;
    len.insert(x);
    forl(i,0,l){
        cin>>t;
        pos.insert(t);
        auto it=pos.find(t);
        auto it2=it;
        it--;it2++;
        len.erase(len.find(*it2-*it));
        len.insert(*it2-t);
        len.insert(t-*it);
        cout<<*len.rbegin()<<" ";
    }
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