#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int l,temp;
   cin>>l;
   map<int,int> mp;
   forl(i,0,l){
    cin>>temp;
    mp[temp]++;
   }
   int max=INT64_MIN,num;
   forall(it,mp){
    if(it->second>max){
       max=it->second;
       num=it->first; 
    } 
   }
   int ans=0;
   mp.erase(mp.find(num));
   forall(it,mp){
    ans+=it->second;
   }
   cout<<ans<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int t=1;
   cin>>t;
   forl(tc, 0, t){
      solve();
   }
   return 0;
}