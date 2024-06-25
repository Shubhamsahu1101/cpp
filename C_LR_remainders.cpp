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

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n];
    int product = 1;
    forl(i, 0, n) {
        cin >> a[i];
        a[i]%=m;
        if(a[i]==0) a[i]=1;
        product *= a[i];
      
    }
    string s;
    // product=product%m;
    cin >> s;
    int l = 0, r = n - 1;
    forl(i, 0, n) {
        // cout<<product<<endl;
        cout <<product % m <<" ";
        if (s[i] == 'L') {
            product=product/a[l];
            l++;
        }
        else {
            product=product/a[r];
            r--;
        }
    }
    cout<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        solve();
    }
    return 0;
}