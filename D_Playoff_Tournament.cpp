#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    int n = 1 << k;
    vector<int> cnt(2 * n, 1);

    auto upd = [&](int i)
    {
        return cnt[i] = (s[i] != '0' ? cnt[i * 2 + 1] : 0) + (s[i] != '1' ? cnt[i * 2 + 2] : 0);
    };

    for (int i = n - 2; i >= 0; i--)
    {
        upd(i);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int p;
        char c;
        cin >> p >> c;
        p = n - p - 1;
        s[p] = c;
        while (p)
        {
            upd(p);
            p = (p - 1) / 2;
        }
        cout << upd(0) << '\n';
    }
}