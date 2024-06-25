#include <bits/stdc++.h>

const int mod = 1e9 + 7;

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<multiset<int>> v(n + 1);
    for (int i = 0; i < m; i++)
    {
        int d, val;
        cin >> d >> val;
        v[d].insert(val);
    }
    int ans = 0;
    int cnt = n;
    multiset<int> s;
    for (int i = 1; i <= n; i++)
    {
        for (auto j : v[i])
        {
            s.insert(j);
        }
        auto it = s.end();
        it--;
        int el = *it;
        ans = (ans % mod + (el % mod) * (cnt % mod)) % mod;
        cnt--;

        s.erase(it);
        
        if (s.size() == 0)
        {
            cnt--;
            continue;
        }
    }
    cout << ans << endl;
}
// Candle