#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    int sum=x+y+z;
    sum-=3;
    if(sum<=2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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