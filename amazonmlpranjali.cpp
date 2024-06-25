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
  int l;
  cin>>l;
  int arr[l];
  forl(i,0,l) cin>>arr[i];

  int mxx=-1;
  forl(i,0,l){
    mxx=max(mxx,arr[i]);
    arr[i]=gcd(arr[i],mxx);
  }

  sort(arr,arr+l);

  int ans=0;
  int s=0,e=l-1;
  while(s<=e){
    ans+=gcd(arr[s],arr[e]);
    s++;e--;
  }

  cout<<ans<<endl;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}