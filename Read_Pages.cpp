#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y,pages=0;
    cin>>n>>x>>y;
    while(y--){
        pages+=x;
    }
    if(pages>=n) cout<<"YES"<<endl;
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