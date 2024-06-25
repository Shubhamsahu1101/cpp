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
    string s;
    cin >> s;
    memset(cnt, 0, sizeof(cnt));
    for (auto c : s) cnt[c - 'a']++;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < L; i++)
        if (cnt[i] == 1)
            cnt1++;
        else if (cnt[i] > 0)
            cnt2++;
    cout << (cnt2 + cnt1 / 2) << endl;
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