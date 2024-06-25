#include <bits/stdc++.h>
#pragma GCC optimize("-O3")
using namespace std;
typedef long long ll;
vector<vector<ll>> g(26);
vector<ll> u(26, 0), d(26, 0);
string ans;
void dfs(ll v) {
    u[v] = 1;
    for (auto to : g[v]) {
        if (!u[to]) dfs(to);
    }
    ans.push_back((char)('a' + v));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<string> s(n), s1;
    for (ll i = 0; i < n; ++i) cin >> s[i];
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < (ll)s[i].size(); ++j) {
            for (ll k = j; k < (ll)s[i].size() && k < j + 2; ++k) {
                g[s[i][j] - 'a'].push_back(s[i][k] - 'a');
                if (k > j) ++d[s[i][k] - 'a'];
            }
        }
    }
    for (ll i = 0; i < n; ++i) {
        if (!u[s[i][0] - 'a'] && d[s[i][0] - 'a'] == 0) dfs(s[i][0] - 'a');
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}