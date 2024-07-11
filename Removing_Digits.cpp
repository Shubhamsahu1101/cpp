#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;
int digit(vector<int>& dp, int rem){
  if(rem<10) return 1;
  if(dp[rem]!=-1) return dp[rem];

  int t=rem;
  int ans=INT_MAX;
  while(t>0){
    int x=t%10;
    t/=10;
    if(x==0) continue;
    ans=min(ans, digit(dp, rem-x));
  }
  ans++;

  dp[rem]=ans;
  return ans;
}
void solve() {
  int l;
  cin>>l;
  vector<int> dp(l+5, -1);
  cout<<digit(dp, l);
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  // cin>>t;
  while(t--) solve();
  return 0;
}