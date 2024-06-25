#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
   int a,b,c;
   cin>>a>>b>>c;
   if(a+b==c||b+c==a||a+c==b) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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