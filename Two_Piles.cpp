#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
  int l;
  cin>>l;
  int a,b;
  vector<pair<int,int>> m1;
  vector<pair<int,int>> m2;
  // map<int,int> m1;
  // map<int,int> m2;
  forl(i,0,l){
    cin>>a>>b;
    m1.pb({a,b});
    m2.pb({b,a});
  }
  sort(m1.begin(),m1.end());
  sort(m2.begin(),m2.end());
  int x,ans=INT64_MAX;
  auto it=m1.end();it--;
  auto z=m1.begin();z--;
  x=it->first;
  it--;
  while(it!=z){
    ans=min(ans,abs(x-it->second));
    ans=min(ans,abs(x-it->first));
    it--;
  }

  it=m2.end();it--;
  z=m2.begin();z--;
  x=it->first;
  it--;
  while(it!=z){
    ans=min(ans,abs(x-it->second));
    ans=min(ans,abs(x-it->first));
    it--;
  }

  cout<<ans<<endl;

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