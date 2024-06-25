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

//********MAIN CODE*******

void solve()
{
  int n,k;
  cin>>n>>k;
  int a[n+1];
  int ans[n+1];
  set<int> s;
  forl(i,0,n){
    cin>>a[i];
    s.insert(a[i]);
  }
  auto it=s.begin();int z;
  forl(i,0,n+1){
    if(it==s.end()){
      z=i;
      break;
    }
    else if(*it==i){
      it++;
    }
    else{
      z=i;
      break;
    }
  }
  a[n]=z;
  if(k==1) k=1;
  else k%=(n+1);
  forl(i,0,n+1){
    ans[k]=a[i];
    k++;
    if(k==n+1) k=0;
  }
  forl(i,0,n){
    cout<<ans[i]<<" ";
  }cout<<endl;
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