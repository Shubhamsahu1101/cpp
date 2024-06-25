#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int a,temp;
   cin>>a;
   int oddevec=0;
   int oddoddc=0;
   int eveevec=0;
   int eveoddc=0;
   forl(i,1,a+1){
    cin>>temp;
    if(i&1==1){
        if(temp&1==1) oddoddc++;
        else oddevec++;
    }else{
        if(temp&1==1) eveoddc++;
        else eveevec++;
    }
    // cout<<oddevec<<oddoddc<<eveevec<<eveoddc<<" ";
   }
   if(oddevec&&oddoddc || eveoddc&&eveevec){
    cout<<"NO"<<endl;
   }else cout<<"YES"<<endl;
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