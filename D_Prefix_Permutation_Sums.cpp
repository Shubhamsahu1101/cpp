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
  int arr[l-1];
  vector<int> perm;
  forl(i,0,l-1){
    cin>>arr[i];
  }
  forl(i,1,l-1){
    perm.pb(arr[i]-arr[i-1]);
  }
  perm.pb(arr[0]);
  sort(perm.begin(),perm.end());
  // print(perm);
  set<int> s;
  forl(i,1,l+1){
    s.insert(i);
  }
  forl(i,0,l-1){
    auto f=s.find(perm[i]);
    if(f!=s.end()){
      s.erase(f);
      perm[i]=-1;
    }
  }
  // print(s);
  if(s.size()==1){
    yes;
    return;
  }
  else if(s.size()>2){
    no;
    return;
  }
  else{
    int zz=*s.begin()+*(--s.end());
    forl(i,0,perm.size()){
      if(perm[i]==zz){
        yes;
        return;
      }
    }
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