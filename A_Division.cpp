#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int a;
   cin>>a;
    if(a<=1399) cout<<"Division 4";
    else if(a<=1599) cout<<"Division 3";
    else if(a<=1899) cout<<"Division 2";
    else cout<<"Division 1";
    cout<<endl;
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