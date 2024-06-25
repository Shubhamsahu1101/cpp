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
  if(s=="()"){
    no;
    return;
  }
  bool c1=false,c2=false;
  forl(i,0,s.length()-1){
    if(s[i]=='(' && s[i+1]==')' || s[i]==')' && s[i+1]=='('){
      c1=true;
    }
    if(s[i]=='(' && s[i+1]=='(' || s[i]==')' && s[i+1]==')'){
      c2=true;
    }
  }
  if(c2==true){
    yes;
    forl(i,0,s.length()){
      cout<<"()";
    }
    cout<<endl;
  }
  else if(c1==true){
    yes;
    forl(i,0,s.length()){
      cout<<'(';
    }
    forl(i,0,s.length()){
      cout<<')';
    }
    cout<<endl;
  }
  else{
    no;
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