#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int l;
   cin>>l;
   string str1;
   string str2;
   cin>>str1>>str2;
   forl(i,0,l){
    if(str1.at(i)=='G' || str1.at(i)=='B') str1.replace(i,1,"X");
    if(str2.at(i)=='G' || str2.at(i)=='B') str2.replace(i,1,"X");
   }
   if(str1==str2) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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