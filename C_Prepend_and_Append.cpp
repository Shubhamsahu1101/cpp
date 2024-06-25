#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l, i = 0, ans;
    string str;
    cin >> l >> str;
    while(i<(l-1)){
        if(str[i] == str[l - 1]) break;
        i++;
        l--;
    }
    cout<<l-i<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        solve();
    }
    return 0;
}