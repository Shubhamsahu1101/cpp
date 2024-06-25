#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
struct range {
      int left;
      int right;
      int index;
};
bool compare(range r1, range r2) {
      if (r1.left < r2.left)
            return true;
      if (r1.left > r2.left)
            return false;
      return r1.right > r2.right;
}
bool compare1(pair<int, int> p1, pair<int, int> p2) {
      if (p1.ff < p2.ff)
            return true;
      if (p1.ff > p2.ff)
            return false;
      return p1.ss > p2.ss;
}
void update(int start, vector<int> &tree, int n, int value) {
      for (; start <= n; start += start & (-start))
            tree[start] += value;
}
int query(int start, vector<int> &tree) {
      int sum = 0;
      for (; start > 0; start -= start & (-start))
            sum += tree[start];
      return sum;
}
void solve(){
    int n;
    cin >> n;
    int sum=0;
    vector<range> v1(n);
    vector<int> BIT1(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        v1[i] = {l, r, i};
    }
    sort(v1.begin(), v1.end(), compare);
    vector<pair<int , int >> opening(n);
    vector<pair<int, int>> closing(n);
    for (int i = 0; i < n; i++) {
        opening[i] = {v1[i].left, v1[i].index};
        closing[i] = {v1[i].right, i};
    }
    sort(closing.begin(), closing.end(), compare1);
    int i = 0, j = 0;
    vector<int> ans2(n);
    vector<int> BIT2(n + 1, 0);
    i = 0, j = 0;
    while (i < n || j < n) {
        if (i < n && opening[i].ff < closing[j].ff) {
            i++;
        } else {
            int val = query(closing[j].ss + 1, BIT2);
            int index_in_sorted = closing[j].ss;
            int actual_index = opening[index_in_sorted].ss;
            ans2[actual_index] = val;
            update(1, BIT2, n, 1);
            if (closing[j].ss + 2 <= n)
                update(closing[j].ss + 2, BIT2, n, -1);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        sum+=ans2[i];
    cout <<sum<< endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}