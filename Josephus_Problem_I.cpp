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
    if(l==1){
        cout<<1;
        return;
    }
    set<int> s;
    forl(i,1,l+1){
        s.insert(i);
    }
    auto it=s.begin();
    it++;
    auto it2=s.begin();
    while(!s.empty()){
        cout<<*it<<" ";
        it2=it;
        it++;
        if(it==s.end()) it=s.begin();
        s.erase(it2);
        if(s.empty()) break;
        it++;
        if(it==s.end()) it=s.begin();
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