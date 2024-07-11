#include <bits/stdc++.h>
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define print(cont)                        \
  forall(it, cont) { cout << *it << " "; } \
  cout << endl
#define printarr(arr)                                                 \
  forl(i, 0, sizeof(arr) / sizeof(arr[0])) { cout << arr[i] << " "; } \
  cout << endl
#define int long long
#define yes                \
  {                        \
    cout << "YES" << endl; \
    return;                \
  }
#define no                \
  {                       \
    cout << "NO" << endl; \
    return;               \
  }
using namespace std;

void solve()
{
  int l, k;
  cin >> l >> k;
  vector<int> v(l);
  forl(i, 0, l) cin >> v[i];
  sort(v.begin(), v.end());
  unordered_map<int, vector<int> > m;
  forl(i, 0, l)
  {
    m[v[i] % k].push_back(v[i]);
  }
  int c = 0;
  forall(it, m)
  {
    c += it->second.size() / 2;
  }
  if (c != l / 2)
  {
    cout << -1 << endl;
    return;
  }
  int ans = 0;
  forall(it, m)
  {
    int curr = 0;
    int n = it->second.size();
    // for(int i=0; i<it->second.size(); i++){
    //   cout<<it->second[i]<<" ";
    // }cout<<endl;
    if (n % 2 != 0)
    {
      curr = INT64_MAX;
      for (int i = 0; i < n; i += 2)
      {
        int m = 0;
        for (int j = 0; j < n; j++)
        {
          if (j == i)
            j += 2;
          else
            j++;
          if (j >= n)
            break;
          m += ((it->second[j] - it->second[j - 1]) / k);
        }
        // cout<<i<<" "<<m<<endl;
        curr = min(curr, m);
      }
    }
    else
    {
      for (int i = 1; i < n; i += 2)
      {
        curr += ((it->second[i] - it->second[i - 1]) / k);
      }
    }
    // cout<<"c  "<<curr<<endl;
    ans += curr;
  }
  cout << ans << endl;
}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}