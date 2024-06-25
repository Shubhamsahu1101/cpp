#include <bits/stdc++.h>
using namespace std;
void split(int x, int n)
{

    // If we cannot split the
    // number into exactly 'N' parts
    if (x < n)
        cout << "-1"
             << " ";

    // If x % n == 0 then the minimum
    // difference is 0 and all
    // numbers are x / n
    else if (x % n == 0)
    {
        for (int i = 0; i < n; i++)
            cout << (x / n) << " ";
    }
    else
    {

        // upto n-(x % n) the values
        // will be x / n
        // after that the values
        // will be x / n + 1
        int zp = n - (x % n);
        int pp = x / n;
        for (int i = 0; i < n; i++)
        {

            if (i >= zp)
                cout << (pp + 1) << " ";
            else
                cout << pp << " ";
        }
    }
}
void solve()
{
    int n, s, r, op;
    cin >> n >> s >> r;
    cout << s - r << " ";
    n-=1;
    split(r, n);
    cout << endl;
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