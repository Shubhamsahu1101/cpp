#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l, i = 0, x = 0, y = 0;
    string str;
    bool boo = true;
    cin >> l >> str;
    while (i < l)
    {
        if (str[i] == 'U')
            y++;
        else if (str[i] == 'D')
            y--;
        else if (str[i] == 'L')
            x--;
        else if (str[i] == 'R')
            x++;
        if ((x == 1 && y == 1))
        {
            cout << "YES" << endl;
            boo = false;
            break;
        }
        i++;
    }
    if (boo)
        cout << "NO" << endl;
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