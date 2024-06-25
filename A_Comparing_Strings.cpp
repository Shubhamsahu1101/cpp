#include <bits/stdc++.h>
using namespace std;
void solve()
{

    string str1, str2;
    cin >> str1 >> str2;
    int p1 = -1, p2 = -1;
    char c1, c2;
    if (str1.length() != str2.length())
        cout << "NO";
    else
    {
        for (int i = 0; i < str1.length(); i++)
        {
            if (str1[i] != str2[i])
            {
                c1 = str1[i];
                p1 = i;
                break;
            }
        }
        for (int i = p1 + 1; i < str1.length(); i++)
        {
            if (str1[i] != str2[i])
            {
                c2 = str1[i];
                p2 = i;
                break;
            }
        }
        if (p1 == -1 || p2 == -1)
            cout << "NO";
        else
        {
            str1 = str1.substr(0, p1) + c2 + str1.substr(p1 + 1, p2 - p1-1) + c1 + str1.substr(p2 + 1, str1.length() - p2);
            //cout<<str1<<endl;
            if (str1 == str2)
                cout << "YES";
            else
                cout << "NO";
        }
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