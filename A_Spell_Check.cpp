#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
   int l;
   cin>>l;
   string str;
   cin>>str;
   set<char> st;
   if(l!=5) cout<<"NO"<<endl;
   else{
    forl(i,0,5){
        st.insert(str.at(i));
    }
        str.clear();
    forall(it,st){
        str.push_back(*it);
    }
    if(str=="Timru") cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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