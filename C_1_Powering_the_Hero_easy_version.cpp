#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
   int n,temp,max=0;
   cin>>n;
   set<int> set;
   priority_queue<int> pq;
   while(n--){
      cin>>temp;
      if(temp>0){
         pq.push(temp);
      }
      else{
         if(pq.empty()) continue;
         max+=pq.top();
         pq.pop();
      }
   }
   cout<<max<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int t=1;
   cin>>t;
   for(int tc= 0; tc < t; tc++){
      solve();
   }
   return 0;
}