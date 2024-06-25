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
int bin(int l){
  int z=-1;
  forl(i,0,64){
    if((l&1)==1) z=i;
    l>>=1;
  }
  return z;
}
// void binrep(int l){
//   int arr[64]={0};
//   forr(i,63,0){
//     if(l&1) arr[i]=1;
//     l>>=1;
//   }
//   forl(i,0,64){
//     cout<<arr[i];
//   }cout<<endl;
// }
void solve(){
  int n,k;
  cin>>n>>k;
  if(k==1){
    cout<<n<<endl;
    return;
  }
  int ans=1;
  int z=1;
  // binrep(n);
  int c=bin(n);
  // cout<<c<<endl;

  forl(i,0,c){
    z<<=1;
    ans|=z;
    // cout<<(1<<i)<<" "<<ans<<endl;
  }
  cout<<ans<<endl;

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