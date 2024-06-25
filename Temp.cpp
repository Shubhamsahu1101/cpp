#include <bits/stdc++.h>
using namespace std;
void solve()
{

    vector<int> vector1 = {1, 2, 3, 4, 5};

    for (int &it : vector1)
    {
        (it) += 2;
    }
    for (int &it : vector1)
    {
        cout << (it);
    }
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