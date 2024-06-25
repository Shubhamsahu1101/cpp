#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont)                          \
    forall(it, cont) { cout << *it << " "; } \
    cout << endl
#define printarr(arr)                                                   \
    forl(i, 0, sizeof(arr) / sizeof(arr[0])) { cout << arr[i] << " "; } \
    cout << endl
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k += 1;
        vector<int> a(n);
        for (int &x : a)
        {
            cin >> x;
            int cur = 1;
            while (x--)
                cur *= 10;
            x = cur;
        }
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = k;
            if (i + 1 < n)
                cnt = min(cnt, a[i + 1] / a[i] - 1);
            res += a[i] * 1LL * cnt;
            k -= cnt;
        }
        cout << res << '\n';
    }
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