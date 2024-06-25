#include <bits/stdc++.h>
using namespace std;

int main() {
    int c;
    cin >> c;
    while (c--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> m(n);
        vector<int> a(n);
        vector<int> t(n);

        for (int i = 0; i < n; i++) {
            cin >> m[i].first;
            m[i].second = i;
        }

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(m.begin(), m.end());
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            t[m[i].second] = a[i];
        }

        for (int i = 0; i < n; i++) {
            cout << t[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}