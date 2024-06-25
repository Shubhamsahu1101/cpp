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
  int arr[l];
  forl(i,0,l){
    cin>>arr[i];
  }
  int m=INT64_MIN;
  
  bool sorted=true;
  forl(i,0,l-1){
    if(arr[i]>arr[i+1]){
      sorted=false;
      break;
    }
  }
  if(sorted){
    cout<<0<<endl;
    return;
  }

  int j=l-1;
  while(j>0 && arr[j-1]<=arr[j]){
    j--;
  }

  forr(i,j,0){
    m=max(m,arr[i]);
  }
  cout<<m<<endl;
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