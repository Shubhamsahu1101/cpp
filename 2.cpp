#include <bits/stdc++.h>

#define pb push_back
#define int long long
#define rsrt(a, n) sort(a, a + n, greater<int>())
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M 1000000007
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define print(cont)                          \
    forall(it, cont) { cout << *it << " "; } \
    cout << endl
#define printarr(arr)                                                   \
    forl(i, 0, sizeof(arr) / sizeof(arr[0])) { cout << arr[i] << " "; } \
    cout << endl
using namespace std;

//MAIN CODE*******

void solve()
{
    int n;
    cin >> n;
    string a;
    string b;
    cin >> a;
    cin >> b;
    vector<int> ans;
    int index = n - 1;
    bool flag = false;
    forl(i, 0, n)
    {
        if (flag == true)
        {
            int s = b[i] - '0';
            ans.pb(s);
            continue;
        }
        if (a[i] == '0' && b[i] == '1')
        {
            ans.pb(0);
            continue;
        }
        if (a[i] == '1' && b[i] == '1')
        {
            ans.pb(1);
            continue;
        }
        if (a[i] == '1' && b[i] == '0' && flag == false)
        {
            ans.pb(1);
            ans.pb(0);
            index = i;
            flag = true;
            continue;
        }
        if (a[i] == '0' && b[i] == '0' && flag == false)
        {
            // while(true)
            // {
            if(i+1==n)
            {
                 ans.pb(0);
                ans.pb(0);
                index = i;
                flag = true;
                continue;
            }
            if (a[i + 1] == '0')
            {
                 ans.pb(0);
            }
            if (a[i + 1] == '1')
            {
                ans.pb(0);
                ans.pb(0);
                index = i;
                flag = true;
                continue;
            }
            // }

            continue;
        }
    }
    if (flag == false)
    {
        int s = b[n - 1] - '0';
        ans.pb(s);
    }
    forl(i, 0, n + 1)
    {
        cout << ans[i];
    }
    cout << endl;
    // cout<<index<<endl;
    int cnt = 0;
    int i = index;
    while (i <= n - 1)
    {
        if (a[i + 1] == b[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
        i++;
    }
    i = index - 1;
    while (i >= 0)
    {
        if (b[i] == a[i + 1])
        {
            cnt++;
        }
        else
        {
            break;
        }
        i--;
    }
    cout << cnt + 1 << endl;
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