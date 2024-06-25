#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    bool b=true;
   int a,temp;
   cin>>a;
   set<int> set;
   while(a--){
    cin>>temp;
    if(set.find(temp)==set.end()){
        set.insert(temp);
    }
    else{ b=false;
    }
   }
    if(b) cout<<"YES"<<endl;
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