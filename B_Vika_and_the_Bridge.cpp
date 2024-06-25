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
  int k,n,t;
  cin>>k>>n;
  map<int,int> mp;
  map<int,pair<int,int>> dist;
  forl(i,0,k){
    cin>>t;
    if(dist.find(t)!=dist.end()){
      if(i-mp[t]-1>=dist[t].first){
        dist[t].second=dist[t].first;
        dist[t].first=(i-mp[t]-1);
        mp[t]=i;
      }
      else{
        mp[t]=i;
      }
    }
    else{
      mp[t]=i;
      dist[t].first=i;
      dist[t].second=0;
    }
  }
//   forall(it,mp){
//     cout<<it->first<<" "<<it->second<<endl;
//   }
// cout<<endl;
// cout<<endl;
// cout<<endl;
//   forall(it,dist){
//     cout<<it->first<<"   "<<it->second.first<<" "<<it->second.second<<endl;
//   }

  forall(it,mp){
    if(k-it->second-1>=dist[it->first].first){
      dist[it->first].second=dist[it->first].first;
      dist[it->first].first=(k-it->second-1);
    }
    else if(k-it->second-1>dist[it->first].second){
      dist[it->first].second=(k-it->second-1);
    }
  }
// cout<<endl;
// cout<<endl;
// cout<<endl;
//   forall(it,dist){
//     cout<<it->first<<"   "<<it->second.first<<" "<<it->second.second<<endl;
//   }

  forall(it,dist){
    dist[it->first].first/=2;
  }
// cout<<endl;
// cout<<endl;
// cout<<endl;
//   forall(it,dist){
//     cout<<it->first<<"   "<<it->second.first<<" "<<it->second.second<<endl;
//   }

  int m=INT64_MAX;
  auto x=dist.begin();
  forall(it,dist){
    m=min(m,max(it->second.first,it->second.second));
    if(m>it->second.first && it->second.first) x=it;
  }
  cout<<m<<endl;
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