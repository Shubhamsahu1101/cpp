#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l, sum, temp, fsum = 0,max=0;
    cin >> l >> sum;
    int arr[214748364]={};
    for (size_t i = 0; i < l; i++)
    {
        cin >> temp;
        arr[temp - 1] = temp;
        if(temp>max) max=temp;
    }
    int i = 0;
    while (fsum < sum)
    {
        if (arr[i] != i + 1)
        {
            fsum += (i + 1);
        }
        i++;
    }
    if (fsum == sum && i>=(max-1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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