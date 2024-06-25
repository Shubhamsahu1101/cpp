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

bool isPrime(int n){
  if(n==1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}

void solve(){
  int l;
  cin>>l;
  int arr[l];
  forl(i,0,l) cin>>arr[i];
  sort(arr,arr+l);
  int i=0;
  while(i<l && arr[i]==arr[0]){
    i++;
  }
  if(i==l) cout<<-1<<endl;
  else{
    cout<<i<<" "<<l-i<<endl;
    forl(j,0,i){
      cout<<arr[j]<<" ";
    }
    cout<<endl;
    forl(j,i,l){
      cout<<arr[j]<<" ";
    }
    cout<<endl;
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