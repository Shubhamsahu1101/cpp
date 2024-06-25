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
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  if(k%2==0){
    sort(s.begin(),s.end());
    cout<<s<<endl;
  }
  else{
    string s1,s2;
    for(int i=0; i<n; i++){
      if(i%2==0) s1+=s[i];
      else s2+=s[i];
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    string ans;
    int i=0,j=0,k=0;
    while(k<n){
      if(k%2==0){
        ans+=s1[i];
        i++;
      }
      else{
        ans+=s2[j];
        j++;
      }
      k++;
    }
    cout<<ans<<endl;
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