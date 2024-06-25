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
  int m;
  cin>>m;
  string a[l];
  forl(i,0,l){
    cin>>a[i];
  }
  int z=0;
  string ch="vika";
  forl(i,0,m){
    forl(j,0,l){
      if(a[j].at(i)==ch.at(z)){
        z++;
        if(z==4){
          yes;
          return;
        }
        break;
      }
    }
  }
  if(z==4){
    yes;
    return;
  }
  no;
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