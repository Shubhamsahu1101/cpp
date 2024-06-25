#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
    int a,temp;
    cin>>a;
    map<int,int> mp;
    forl(i,0,a){
        cin>>temp;
        if(mp.empty()) mp[temp]=0;
        if(mp.find(temp)==mp.end()){
            mp[temp]=1;
        }
        else mp.find(temp)->second++;
    }
    forall(it,mp){
        if(it->second>=3){
            cout<<it->first<<endl;return;
        }
    }
    cout<<-1<<endl;
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