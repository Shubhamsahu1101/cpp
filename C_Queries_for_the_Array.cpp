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
  int l=s.size();
  
  int maxsorted=1, minsorted=1;

  int p=0;
  forl(i,0,l){
    if(s.at(i)=='+'){
      if(maxsorted==p) maxsorted++;
      p++;
      minsorted=max((int)1,minsorted);
    }
    else if(s.at(i)=='-'){
      p--;
      maxsorted=min(maxsorted, p);
      minsorted=min(minsorted, p);
    }
    else if(s.at(i)=='1') {
      if(p>maxsorted){
        no;
        return;
      }
      minsorted=p;
      maxsorted=p;
    }
    else if(s.at(i)=='0') {
      if(p<=minsorted) {
        no;
        return;
      }
      if(maxsorted==p) maxsorted--;
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