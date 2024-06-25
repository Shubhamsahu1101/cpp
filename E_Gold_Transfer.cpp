#include <bits/stdc++.h>

using namespace std;

#define fore(i, l, r) for (int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())

#define x first
#define y second

typedef long long li;
typedef pair<int, int> pt;

template <class A, class B>
ostream &operator<<(ostream &out, const pair<A, B> &p)
{
    return out << "(" << p.x << ", " << p.y << ")";
}
template <class A>
ostream &operator<<(ostream &out, const vector<A> &v)
{
    out << "[";
    fore(i, 0, sz(v))
    {
        if (i)
            out << ", ";
        out << v[i];
    }
    return out << "]";
}

const int INF = int(1e9);
const li INF64 = li(1e18);

const int LOG = 20;

int q;
vector<int> a, c;
vector<int> p[LOG];

int main()
{
    cin >> q;
    a.resize(q + 1);
    c.resize(q + 1);

    fore(lg, 0, LOG)
        p[lg]
            .resize(q + 1);

    fore(lg, 0, LOG)
        p[lg][0] = 0;
    cin >> a[0] >> c[0];

    fore(id, 1, q + 1)
    {
        int tp;
        cin >> tp;
        if (tp == 1)
        {
            int pr;
            cin >> pr;
            cin >> a[id] >> c[id];

            p[0][id] = pr;
            fore(lg, 1, LOG)
                p[lg][id] = p[lg - 1][p[lg - 1][id]];
        }
        else
        {
            int v, w;
            cin >> v >> w;

            int ansR = 0;
            li ansS = 0;

            while (w > 0 && a[v] > 0)
            {
                int u = v;
                for (int lg = LOG - 1; lg >= 0; lg--)
                {
                    if (a[p[lg][u]] > 0)
                        u = p[lg][u];
                }
                int mn = min(a[u], w);
                a[u] -= mn;
                w -= mn;

                ansR += mn;
                ansS += mn * 1ll * c[u];
            }
            cout << ansR << " " << ansS << endl;
        }
    }

    return 0;
}