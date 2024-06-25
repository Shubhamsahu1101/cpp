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
  string s;
  cin>>s;
  s='0'+s;
  int l=s.length();
  int c=-1;
  forl(i,0,l){
    if(s.at(l-i-1)-48>4 && s.at(l-i-2)-48<5){
      if(s.at(l-i-2)-48==9){
        s.replace(l-i-2,1,"1");
      c=l-i-1;
      }
      else{
        s.replace(l-i-2,1,to_string(s.at(l-i-2)-47));
      c=l-i-1;
      }
    }
  }
  if(c!=-1) forl(j,c,s.length()) s.replace(j,1,"0");
  if(s.at(0)=='0') s.replace(0,1,"");
  cout<<s<<endl;
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