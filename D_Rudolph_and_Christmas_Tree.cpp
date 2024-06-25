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
  long double n,d,h;
  cin>>n>>d>>h;
  int height[long(n)];
  forl(i,0,n) cin>>height[i];
  long double ans=0,area=(h*d)/2;
  int x;
  forl(i,0,n-1){
    x=height[i+1]-height[i];
    long double g=((2-(x/h))*((x*d)/2));
    if(x<h) ans+=g;
    else ans+=area;
    // cout<<x<<" "<<ans<<" . ";
  }
  ans+=area;
  cout<<setprecision(9)<<ans<<endl;
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