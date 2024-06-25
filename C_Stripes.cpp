#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    bool b=true;
    string str;
    for (int i = 0; i < 8; i++){
       cin>>str;
       if(str=="RRRRRRRR"){
        b=false;
       }
    }
    if(b) cout<<'B'<<endl;
    else cout<<'R'<<endl;
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