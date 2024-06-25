#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
  int n, k, d;
  cin>>n>>k>>d;

  int water[2000]={0};
  int day[k];
  forl(i,0,n) cin>>water[i];
  forl(i,0,k) cin>>day[i];

  int maxans=0;
  forl(i,0,min(2*n,d)){
    int c=0;
    forl(j,0,n){
      if(water[j]==j+1) c++;
    }
    // cout<<c<<" "<<((d-i-1)/2)<<endl;
    maxans=max(maxans, c+((d-i-1)/2));
    forl(j,0,day[i%k]){
      water[j]++;
    }
  }
  cout<<maxans<<endl;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}