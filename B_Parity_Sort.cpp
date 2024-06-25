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
  int l,t;
  cin>>l;
  vector<int> even;
  vector<int> odd;
  int arr[l];
  int check[l];
  forl(i,0,l){
    cin>>arr[i];
    if(arr[i]%2==0){
      even.pb(arr[i]);
      check[i]=1;
    }
    else{
      odd.pb(arr[i]);
      check[i]=0;
    }
  }

  sort(even.begin(),even.end());
  sort(odd.begin(),odd.end());
  // printarr(arr);

  int x=0;
  forl(i,0,even.size()){
    while(check[x]!=1) x++;
    arr[x]=even[i];
    x++;
  }
  x=0;
  forl(i,0,odd.size()){
    while(check[x]!=0) x++;
    arr[x]=odd[i];
    x++;
  }
  // print(even);
  // print(odd);
  // printarr(arr);
  forl(i,1,l){
    if(arr[i]<arr[i-1]){
      no;
      return;
    }
  }

  yes;
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