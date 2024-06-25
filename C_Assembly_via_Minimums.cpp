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
  map<int,int> m;
  int sz=(l*(l-1))/2,t;
  int ans[l];
  int a[sz];

  forl(i,0,sz){
    cin>>a[i];
  }
  sort(a,a+sz);
  int z=l-1;
  int y=0;
  forl(i,0,l-1){
    y+=z;
    ans[i]=a[y-1];
    z--;
  }

  ans[l-1]=(1000000000);
  
  printarr(ans);

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