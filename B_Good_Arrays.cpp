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
  forl(i,0,l) cin>>arr[i];
  if(l==1){
    no;
    return;
  }
  int x=INT64_MAX;
  int y=INT64_MIN,d;
  int c=0;
  int cx=0;
  forl(i,0,l){
    if(arr[i]==1) c++;
    else cx+=arr[i];
    // if(arr[i]<x){
    //   x=arr[i];
    //   c=i;
    // }
    // if(arr[i]>y){
    //   y=arr[i];
    //   d=i;
    // }
  }
  int noones=l-c;
  cx-=noones;
  if(cx<c) no;
  else yes;
  // if(c<=1){
  //   yes;
  //   return;
  // }
  // if(y>l-1){
  //   yes;
  //   return;
  // }
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