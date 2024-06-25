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
  string str;
  cin>>str;
  int arr[l+1]={0};
  forl(i,0,l){
    cin>>arr[i];
  }
  
  int ans=0;
  int s=0,e=0;
  while(e<l){
    if(str.at(e)=='0' && e<l-1){
      s=e;
      e++;
      continue;
    }
    else{
      while(e<l && str.at(e)=='1') e++;
      int x=INT64_MAX;

      forl(i,s,e){
        x=min(x,arr[i]);
        ans+=arr[i];
      }
      if(e-s>1) ans-=x;
      else if(e-s==1){
        if(str.at(e-1)=='0') ans-=x;
      }
    }
    // cout<<s<<" "<<e<<" "<<ans<<endl;
    s=e;
    e++;
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