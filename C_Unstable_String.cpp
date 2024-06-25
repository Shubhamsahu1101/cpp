#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    string s;
    cin >> s;
    vector<vector<int>> lst(2, vector<int>(2, -1));
    long long ans = 0;
    for (int i = 0; i < int(s.size()); ++i) {
      int j = i - 1;
      int p = i & 1;
      if (s[i] != '1') j = min(j, max(lst[0][p ^ 1], lst[1][p]));
      if (s[i] != '0') j = min(j, max(lst[0][p], lst[1][p ^ 1]));
      ans += i - j;
      if (s[i] != '?') lst[s[i] - '0'][p] = i;
    }
    cout << ans << '\n';
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