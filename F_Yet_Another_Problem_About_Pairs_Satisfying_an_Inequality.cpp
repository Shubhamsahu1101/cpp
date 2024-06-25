#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
void solve(){
   int l; cin>>l;
   map<int,vector<int>> data;
   map<int,int> count;
   
   int temp,x=0;
   forl(i,0,l){
      cin>>temp;
      if(temp<i+1){
         data[temp].push_back(i+1);
         count[temp]++;
         x++;
      }
   }
   forall(it,count){
      temp=it->second;
      it->second=x;
      x-=temp;
   }
   int ans=0;
   forall(it,data){
      forall(it2,it->second){
         if(count.upper_bound(*it2)!=count.end())
            ans+=count.upper_bound(*it2)->second;
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