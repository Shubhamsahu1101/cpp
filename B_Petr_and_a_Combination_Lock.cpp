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
bool check(int arr[],int k, int a, int b){
  if(k==0){
    if(a==b) return true;
    else if(a%360==0 && a!=0) return true;
    else if(b%360==0 && b!=0) return true;
    else if((a-b)%360==0 && a!=0 && b!=0) return true;
    return false;
  }
  return check(arr,k-1,a+arr[k-1],b) || check(arr,k-1,a,b+arr[k-1]);
}
void solve(){
  int l;
  cin>>l;
  int arr[l];
  forl(i,0,l){
    cin>>arr[i];
  }
  if(check(arr,l,0,0)) yes;
  else no;
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