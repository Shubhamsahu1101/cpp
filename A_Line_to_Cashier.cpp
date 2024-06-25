#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int c, t = 0, temp, min = INT64_MAX;
    cin >> c;
    int cash[c];
    for (size_t i = 0; i < c; i++)
    {
        cin >> cash[i];
    }
    for (size_t i = 0; i < c; i++)
    {
        t = cash[i] * 15;
        for (int j = 0; j < cash[i]; j++)
        {
            cin >> temp;
            t += temp * 5;
        }
        if (t < min) min = t;
    }
    cout << min;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    for (int tc = 0; tc < t; tc++)
    {
        solve();
    }
    return 0;
}