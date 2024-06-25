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
vector<int> powers;

void solve(){
  int l;
  cin>>l;
  vector<int> v;
  v.pb(l);
  auto c=powers.begin();
  while(l>1){
    c=--lower_bound(powers.begin(),powers.end(),l);
    while(l%*c!=0) c--;
    l-=*c;
    v.pb(l);
  }
  cout<<v.size()<<endl;
  print(v);
}
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  int x=-1,z=0;
  while(true){
    x=pow(2,z);
    z++;
    if(x>1e9) break;
    powers.pb(x);
  }
  for(int tc= 0; tc < t; tc++){
    solve();
  }
  return 0;
}