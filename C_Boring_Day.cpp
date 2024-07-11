#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
  int n, l, r;
  cin>>n>>l>>r;
  int c=0, sum=0, x=0;
  vector<int> v(n);
  forl(i,0,n) cin>>v[i];
  forl(i,0,n){
    sum+=v[i];
    while(sum-v[x]>=l) sum-=v[x++];
    if(sum>=l && sum<=r){
      c++;sum=0;x=i+1;
    }
  }
  cout<<c<<endl;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}