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
  int l;
  cin>>l;
  int x;
  cin>>x;
  int arr[l+1]={0};
  forl(i,1,l+1){
    cin>>arr[i];
  }
  vector<int> s;
  sort(arr,arr+l+1);

  forl(i,2,l+1){
    if((arr[i]-arr[i-1])<=x){
      continue;
    }
    else{
      s.pb(i);
    }
  }
  sort(s.begin(),s.end());
  if(s.empty()){
    cout<<0<<endl;
    return;
  }
  // printarr(arr);
  // print(s);
  int ans=min((l-(*s.begin())+1),((*(--s.end()))-0-1));


  forl(i,1,s.size()){
    ans=min(ans,(((s.at(i-1))-0-1)+(l-(s.at(i))+1)));
  }


  
  cout<<ans<<endl;
  // cout<<endl;

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