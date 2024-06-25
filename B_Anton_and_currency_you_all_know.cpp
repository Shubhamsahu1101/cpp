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
  string s; cin>>s;
  char x=s.at(s.length()-1);
  char y;
  int k=-1;
  forl(i,0,s.length()-1){
    if(s.at(i)%2==0){
      k=i;
      if(s.at(i)<x){
        y=s.at(i);
        s.at(i)=x;
        s.at(s.length()-1)=y;
        cout<<s<<endl;
        return;
      }
    }
  }
  if(k!=-1){
    y=s.at(k);
    s.at(s.length()-1)=y;
    s.at(k)=x;
    cout<<s<<endl;
    return;
  }
  cout<<-1<<endl;
}
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  //cin>>t;
  for(int tc= 0; tc < t; tc++){
    solve();
  }
  return 0;
}