#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    while (true)
    {
        if (x == y || (abs(x) == y && y >= 0) || (x + y == 1 && y <= 0))
        {

            if (x > 0 && y > 0)
            {
                cout << (4 * (x - 1)) + 1;
            }
            else if (x < 0 && y > 0)
            {
                cout << (4 * (y - 1)) + 2;
            }
            else if (x < 0 && y < 0)
            {
                cout << (4 * (abs(x) - 1)) + 3;
            }
            else if (x > 0 && y < 0)
            {
                cout << (4 * (x - 1));
            }
            else
            {
                cout << 0;
            }
            break;
        }
        else if (x == 0)
        {
            if (y > 0)
            {
                x=-y;
            }
            else
            {
                x=1-y;
            }
        }
        else if (y == 0)
        {
            y=x;
        }
        else if (x > 0 && y > 0)
        {
            if (x > y)
            {
                y=x;
            }
            else
            {
                x=-y;
            }
        }
        else if (x < 0 && y > 0)
        {
            if (abs(x) > y)
            {
                y=x;
            }
            else
            {
                x=-y;
            }
        }
        else if (x < 0 && y < 0)
        {
            if (abs(x) > abs(y))
            {
                y=x;
            }
            else
            {
                x=abs(y-1);
            }
        }
        else
        {
            if (x <= abs(y))
            {
                x=abs(y-1);
            }
            else
            {
                y=x;
            }
        }
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