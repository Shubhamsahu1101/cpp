#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k % n == 0)
    {
        int f = k / n;

        if (f > 2)
            cout << 0 << endl;
        else if (f <= 2)
            cout << n << endl;
    }
    else
    {
        float f = k / n;

        if (f < 3)
            cout << (n - k % n) << endl;
        else
            cout << 0 << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        solve();
    }
    return 0;
}