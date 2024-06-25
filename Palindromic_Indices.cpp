#include <bits/stdc++.h>
#include <cstring>
using namespace std;
bool palindrome(string str, int l)
{
    string new_str = "";
    for (int i = l - 1; i != 0; i--)
    {
        new_str.insert(new_str.begin() + i, str[i]);
    }
    cout << new_str;
    return (str == new_str);
}
void solve()
{
    int x, l, ctr = 0;
    string str, new_str;

    cin >>l>>str;
    for (int i = 0; i < l; i++)
    {
        //strcpy(new_str,str);
        new_str.erase(new_str.begin() + i);
        if (palindrome(new_str, l))
            ctr++;
    }
    cout << ctr;
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