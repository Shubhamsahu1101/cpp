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
  int n,m,k;
  cin>>n>>m>>k;
  int v1,v2;
  cin>>v1>>v2;
  int fx[k],fy[k];
  forl(i,0,k){
    cin>>fx[i]>>fy[i];
  };
  forl(i,0,k){
    if((((abs(v1-fx[i])+abs(v2-fy[i]))%2)==0) || abs(v2-fy[i])==abs(v1-fx[i])){
      no;
      return;
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