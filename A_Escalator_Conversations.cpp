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
  int n,m,k,h;
  cin>>n>>m>>k>>h;
  map<int,int> diff;
  int t;
  forl(i,0,n){
    cin>>t;
    diff[abs(h-t)]++;
  }
  set<int> stairshdiff;
  int a[m+1];
  forl(i,1,m+1){
    a[i]=k*i;
  }
  forl(i,1,m+1){
    forl(j,i+1,m+1){
      stairshdiff.insert(abs(a[i]-a[j]));
    }
  }
  int ans=0;
  // print(stairshdiff);
  forall(it,stairshdiff){
    ans+=diff[*it];
    diff[*it]=0;
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