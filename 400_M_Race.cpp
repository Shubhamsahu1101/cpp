#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    int highest=min(x,min(y,z));
    if(highest==x) cout<<"ALICE"<<endl;
    else if(highest==y) cout<<"BOB"<<endl;
    else cout<<"CHARLIE"<<endl;
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