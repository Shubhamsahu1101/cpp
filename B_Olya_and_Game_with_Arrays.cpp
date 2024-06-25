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
  cin>>l;int t;
  vector<int> arr;
  vector<int> m1;
  vector<int> m2;
  forl(i,0,l){
    int x; cin>>x;
    forl(i,0,x){
      cin>>t;
      arr.pb(t);
    }
    sort(arr.begin(),arr.end());
    m1.pb(arr[0]);
    m2.pb(arr[1]);
    arr.clear();
  }
  int e,f=INT64_MAX;
  forl(i,0,l){
    if(m2[i]<f){
      f=m2[i];
      e=i;
    }
  }
  int g,h=INT64_MAX;
  forl(i,0,l){
    if(m1[i]<h){
      h=m1[i];
      g=i;
    }
  }
  int ans=0;
  forl(i,0,l){
    if(i==e) continue;
    ans+=m2[i];
  }
  ans+=m1[g];
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