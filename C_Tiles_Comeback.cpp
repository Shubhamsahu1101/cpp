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
  int n,k;
  cin>>n>>k;
  int arr[n];
  forl(i,0,n){
    cin>>arr[i];
  }

  if(arr[0]==arr[n-1]){
    int c=0;
    forl(i,0,n){
      if(arr[i]==arr[0]) c++;
    }
    if(c>=k) yes;
    else no;
  }
  else{
    int s=arr[0];int lastofstart;
    int e=arr[n-1];int firstofend;

    int x=k;
    int i=0;
    while(x--){
      if(i>n-1){
        no;
        return;
      }
      while(i<n && arr[i]!=s) i++;
      i++;
    }
    lastofstart=i-1;

    x=k;
    i=n-1;
    while(x--){
      if(i<0){
        no;
        return;
      }
      while(i>0 && arr[i]!=e) i--;
      i--;
    }
    firstofend=i+1;

    if(lastofstart<firstofend) yes;
    else no;
  }
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