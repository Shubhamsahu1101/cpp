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
  int l;
  cin>>l;
  string s;
  cin>>s;
  if(l<=2){
    int ans=0;
    forl(i,0,l){
      ans+=s.at(i)-'0';
      if(i!=l-1)ans*=10;
    }
    cout<<ans<<endl;
    return;
  }
  int ans=INT64_MAX,prev=INT64_MAX;
  forl(i,0,l-1){
    int sum=0;
    prev=-1;
    forl(j,0,l){
      if(s.at(j)=='0' && l>3){
        cout<<0<<endl;
        return;
      }
      int curr;
      if(j==i){
        curr=(s.at(j++)-'0');
        curr*=10;
        curr+=s.at(j)-'0';
      }
      else{
        curr=s.at(j)-'0';
      }
      if((curr<=1 || prev<=1) && prev!=-1){
        sum-=prev;
        sum+=curr*prev;
        prev=curr*prev;
      }
      else {
        sum+=curr;
        prev=curr;
      }
    }
    ans=min(ans, sum);
  }
  cout<<ans<<endl;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) solve();
  return 0;
}