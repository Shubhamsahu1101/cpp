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
  int n,k;
  int t,x;
  cin>>n>>k;

  int cost[n];
  set<int> already;
  
  forl(i,0,n) cin>>cost[i];
  forl(i,0,k){
    cin>>t;
    already.insert(t-1);
  }

  vector<int> mix[n];
  forl(i,0,n){
    cin>>t;
    forl(j,0,t){
      cin>>x;
      mix[i].pb(x-1);
    }
  }

  forl(i,0,n){
    int buy=cost[i];
    int mixingcost=0;

    if(already.find(i)!=already.end()){
      cout<<0<<" ";
      continue;
    }

    if(mix[i].size()==0){
      cout<<buy<<" ";
      continue;
    }

    forl(j,0,mix[i].size()){
      if(already.find(mix[i][j])==already.end()){
        mixingcost+=cost[mix[i][j]];
      }
    }

    cout<<min(buy,mixingcost)<<" ";
  }
  cout<<endl;
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