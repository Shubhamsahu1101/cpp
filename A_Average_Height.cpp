#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int c, temp;
    cin >> c;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < c; i++)
    {
        cin >> temp;
        if (temp & 1 == 1)
            v1.push_back(temp);
        else
            v2.push_back(temp);
    }
    for (int i : v1)
    {
        cout << i << " ";
    }
    for (int i : v2)
    {
        cout << i << " ";
    }
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