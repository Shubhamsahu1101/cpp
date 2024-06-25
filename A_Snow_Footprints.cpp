#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l, start, end;
    cin >> l;
    string str;
    cin >> str;
    for (size_t i = 0; i < l; i++)
    {
        if (str[i] == '.')
            ;
        else if (str[i] == 'R')
        {
            if (str[i + 1] == 'L')
            {
                start = i + 2;
                end = i + 1;
                break;
            }
            else if (str[i + 1] == '.')
            {
                start = i + 1;
                end = i + 2;
                break;
            }
        }
        else if (str[i] == 'L')
        {
            if (i == l - 1)
            {
                start = i + 1;
                end = i;
                break;
            }
            else if (str[i - 1] == '.')
            {
                start = i + 1;
                end = i;
                break;
            }
        }
    }
    cout << start << " " << end;
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