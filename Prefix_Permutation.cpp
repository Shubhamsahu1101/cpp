#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int l;
   cin>>l;
   if(l&1==1) cout<<-1<<endl;
   else{
    forl(i,1,l+1){
        if(i&1==1) cout<<i+1<<" ";
        else cout<<i-1<<" ";
    }
    cout<<endl;
   }
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