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
  int ans=INT64_MIN,currans=0,maxelement=0;
  int a=1,b=l;
  forl(i,0,l){
    currans=0;
    a=1,b=l;
    forl(j,0,l){
      if(j<i){
        // cout<<a<<" ";
        currans+=a*(j+1);
        maxelement=max(maxelement,a*(j+1));
        a++;
      }
      else{
        // cout<<b<<" ";
        currans+=b*(j+1);
        maxelement=max(maxelement,b*(j+1));
        b--;
      }
    }
    // cout<<endl;
    currans-=maxelement;
    // cout<<currans<<endl;
    ans=max(ans,currans);
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