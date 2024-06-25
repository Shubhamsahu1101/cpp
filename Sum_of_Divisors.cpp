#include <bits/stdc++.h>
#define int long long int
using namespace std;
int sum(int a)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            sum += i;
            if (i != a / i)
                sum += a / i;
        }
    }
    return sum;
}
void solve()
{
    int n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s += sum(i);
    }
    cout << s % 1000000007;
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