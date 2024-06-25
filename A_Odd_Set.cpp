#include <bits/stdc++.h>
#define int long long int
#define ll << endl
using namespace std;
void solve()
{
    int c, t, odd = 0, eve = 0;
    cin >> c;
    for (int i = 0; i < 2 * c; i++)
    {
        cin >> t;
        if (t & 1 == 1)
            odd++;
        else
            eve++;
    }
    if (odd == eve)
        cout << "Yes" ll;
    else
        cout << "No" ll;
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