#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
#define M 1000000007
using namespace std;
int dice(vector<int>& dp, int rem) {
  if(rem<0) return 0;
  if(rem==0) return 1;
  if(dp.at(rem)!=-1) return dp.at(rem);

  int ans=0;
  for(int i=1; i<7; i++){
    ans+=dice(dp, rem-i);
  }
  ans%=M;
  
  dp[rem]=ans;
  return ans;
}
void solve() {
  int l;
  cin>>l;
  vector<int> dp(l+1,-1);
  cout<<dice(dp, l);
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  // cin>>t;
  while(t--) solve();
  return 0;
}