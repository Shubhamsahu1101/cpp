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
vector<string> pr;
void sieve(int n){
  bool prime[n+1];
  memset(prime,true,sizeof(prime));
  for(int p=2;p*p<=n;p++){
    if(prime[p]==true){
      for(int i=p*p;i<=n;i+=p){
        prime[i]=false;
      }
    }
  }
  for(int p=11;p<=n;p++){
    if(prime[p]){
      pr.pb(to_string(p));
    }
  }
}
void solve(){
  string s;
  cin>>s;
  bool flag=false;
  forl(i,0,9588){
    int z=0;
    forl(j,0,s.length()){
        if(z==pr[i].length()){
            flag=true;
            break;
        }
        if(s.at(j)==pr[i].at(z)) z++;
    }
    if(flag){
        cout<<pr[i]<<endl;
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
  sieve(100000);
  for(int tc= 0; tc < t; tc++){
    solve();
  }
  return 0;
}