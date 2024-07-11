#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
  string a;
  string b;
  cin>>a;
  cin>>b;
  int l1=a.size();
  int l2=b.size();

  int j=0;
  int k=l1-1;
  int jcount=0,kcount=0;

  forl(i,0,b.size()){
    forl(j1,0,a.size()){
        if(a.at(j1)==b.at(i)){
          jcount++;
          j=j1+1;
          break;
        }
      }
    if(jcount>=a.size()) break;
  }

  for(int i=l2-1; i>=0; i--){
    for(int k1=l1-1; k1>=0; k1--){
        if(a.at(k1)==b.at(i)){
          kcount++;
          k=k1-1;
          break;
        }
      }
    if(kcount>=l2) break;
  }
  
  // if(j==b.size()-1) j=b.size();
  // cout<<jcount<<endl;

  // // if(kcount==b.size()-1) kcount=b.size();
  // // k++;
  // cout<<kcount<<endl;

  cout<<min(a.size()+b.size()-jcount, a.size()+b.size()-kcount)<<endl;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}