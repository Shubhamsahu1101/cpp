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
  int l; cin>>l;
  int x; cin>>x;
  int arr[l];
  int s=0,e=l-1,sum=0,c=0;
  forl(i,0,l){
    cin>>arr[i];
    sum+=arr[i];
  }
  while(s<e){
    if(sum==x){
      c++;
      if(s<e){
        sum-=arr[s];
        s++;
      }
      else if(e<l){
        sum-=arr[e];
        e--;
      }
    }
    else if(s<e && abs(x-(sum-arr[s]))<abs(x-(sum-arr[e]))){
      sum-=arr[s];
      s++;
    }
    else {
      sum-=arr[e];
      e--;
    }
  }
  cout<<c<<endl;
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