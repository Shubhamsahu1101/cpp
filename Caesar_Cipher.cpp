#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < n; i++)
    {
        int final = 0;
        int diff = b[i] - a[i];

        // cout<<diff<<endl;

        if (c[i] + diff <= 122)
        {
            final = c[i] + diff;
        }
        else
        {
            final = ((c[i] + diff) - 122) + 96;
        }

        // cout<<final;
        char ans = char(final);
        cout << ans;
    }
    cout << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}