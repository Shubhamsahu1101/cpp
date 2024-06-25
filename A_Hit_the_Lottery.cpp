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
  int l; cin>>l;
  int c=0;
  while(l-100>=0){
    l-=100;c++;
  }
  while(l-20>=0){
    l-=20;c++;
  }
  while(l-10>=0){
    l-=10;c++;
  }
  while(l-5>=0){
    l-=5;c++;
  }
  while(l-1>=0){
    l-=1;c++;
  }
  cout<<c<<endl;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  // cin>>t;
  for(int tc= 0; tc < t; tc++){
    solve();
  }
  return 0;
}