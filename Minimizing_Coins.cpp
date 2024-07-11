#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;
int coin(vector<int>& v, vector<int>& dp, int rem){
  if(rem<0) return INT_MAX;
  if(rem==0) return 0;

  if(dp[rem]!=-1) return dp[rem];

  int ans=INT_MAX;
  for(int i=0; i<v.size(); i++){
    ans=min(ans, coin(v, dp, rem-v[i]));
  }
  
  ans++;
  dp[rem]=ans;
  return ans;
}
void solve() {
  int n,x;
  cin>>n>>x;
  vector<int> v(n);
  vector<int> dp(x+1,-1);
  forl(i,0,n) cin>>v[i];

  coin(v, dp, x);
  int ans=dp[x];
  if(ans>=INT_MAX) cout<<-1;
  else cout<<ans;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  // cin>>t;
  while(t--) solve();
  return 0;
}