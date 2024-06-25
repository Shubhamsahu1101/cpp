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
  int a,b;
  cin>>a>>b;
  if(a==b && a%2!=0){
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            cout<<a/i<<" "<<a-(a/i)<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
  }
  if(b%2==0){
    if(b/2 > 1) {
        cout<<b/2<<" "<<b/2<<endl;
        return;
    }
  }
  else{
    if(b/2 > 1){
         cout<<(b-1)/2<<" "<<(b-1)/2<<endl;
    return;
    }
  }
  cout<<-1<<endl;
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