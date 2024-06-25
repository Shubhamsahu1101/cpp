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
  int arr[l];
  forl(i,0,l) cin>>arr[i];
  string s="";
  cin>>s;
  vector<int> b;
  vector<int> r;
  forl(j,0,l){
    if(s.at(j)=='B') b.pb(arr[j]);
    else r.pb(arr[j]);
  }
  sort(b.begin(),b.end());
  sort(r.begin(),r.end());
  auto itrb=b.begin();
  auto itrr=r.begin();
  forl(i,1,l+1){
    if(itrb!=b.end()){
      if(*itrb<i){
        no;
        return;
      }
      itrb++;
    }
    else{
      if(*itrr>i){
        no;
        return;
      }
      itrr++;
    }
  }
  yes;
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