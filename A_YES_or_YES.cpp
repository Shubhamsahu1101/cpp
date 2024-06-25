#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve()
{
    string str;
    cin >> str;
    if (str.at(0) == 'Y' || str.at(0) == 'y')
    {
        if (str.at(1) == 'E' || str.at(1) == 'e')
        {
            if (str.at(2) == 'S' || str.at(2) == 's')
            {
                cout << "YES" << endl;return;
            }
        }
    }
    cout<<"NO"<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    forl(tc, 0, t)
    {
        solve();
    }
    return 0;
}