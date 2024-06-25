#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int a,c=0;
   cin>>a;
   string temp;
   map<char,map<char,int>> m1;
   map<char,map<char,int>> m2;
   forl(i,0,a){
      cin>>temp;
      m1[temp.at(0)][temp.at(1)]++;
      m2[temp.at(1)][temp.at(0)]++;
   }

   int ans=0;
   forall(i,m1){
      if(i->second.size()==1) continue;
      forall(j,i->second){
         for(auto k=j;k!=i->second.end();k++){
            if(j!=k){
               // cout<<j->second<<" "<<k->second<<endl;
               ans+=j->second*k->second;
            }
         }
      }
   }
   forall(i,m2){
      if(i->second.size()==1) continue;
      forall(j,i->second){
         for(auto k=j;k!=i->second.end();k++){
            if(j!=k){
               // cout<<j->second<<" "<<k->second<<endl;
               ans+=j->second*k->second;
            }
         }
      }
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