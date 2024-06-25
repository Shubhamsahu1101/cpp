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
    int n; cin >> n;
    map<string, int> mp;
    mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;
    int ans = 1e9;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x; string s; cin >> s;
        mp[s] = min(mp[s], x);
    }
    if(min(mp["11"], mp["10"] + mp["01"]) > (int)1e6) {
        cout << "-1\n";
    } else {
        cout << min(mp["11"], mp["10"] + mp["01"]) << "\n";
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