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
    int l, t;
    cin >> l;
    int one = 0, two = 0;
    forl(i, 0, l)
    {
        cin >> t;
        if (t == 100)
            one++;
        else
            two++;
    }
    int total = one + two * 2;
    if (total % 2 != 0)
    {
        no;
        return;
    }
    else
    {
        total /= 2;
        for (int i = 0; i <= total; i += 2)
        {
            if ((i / 2) <= two && (total - i) <= one)
            {
                yes;
                return;
            }
        }
        no;
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