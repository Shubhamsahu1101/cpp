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

bool candy(int arr[],int x, int a,int b, vector<vector<int>> &dp){
  if(x==-1) {
    if(a==b) return true;
    else return false;
  }
  if(dp[a][b] !=-1) return dp[a][b];
  
  bool flag = false;
  if(candy(arr,x-1,a+arr[x],b,dp)){
    flag=true;
  }
  if(candy(arr,x-1,a,b+arr[x],dp)){
    flag=true;
  }
  return dp[a][b] = flag;
}
void solve(){
  int l;
  cin>>l;
  int arr[l];
  forl(i,0,l) cin>>arr[i];
  vector<vector<int>> dp(1001,vector<int>(1001,-1));
  if(candy(arr,l-1,0,0,dp)) yes;
  else no;
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