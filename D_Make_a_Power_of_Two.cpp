#include <bits/stdc++.h>
 
#define pb push_back
#define int long long
#define rsrt(a,n) sort(a,a+n,greater<int>())
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M 1000000007
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
string arr[103];
//********MAIN CODE*******
 
void solve()
{
  string s; cin>>s;
  int k;
  int ans=INT64_MAX;
  forl(i,0,100)
  {
    int j=0;
    forl(k,0,s.size())
    {
      if(j==arr[i].length()) break;
      if(s[k]==arr[i][j]) j++;
    }
    int l=s.size();
    int l2=arr[i].size();
    ans=min((l-j)+(l2-j),ans);
    // cout<<(l-j)+(l2-j)<<endl;
    // cout<<ans<<"arr[i]"<<arr[i]<<endl;
  }
  cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
     cin>>t;
     forl(i,0,103){
      int x=pow(2,i);
      arr[i]=to_string(x);
     }
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}