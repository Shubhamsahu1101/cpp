#include <bits/stdc++.h>
using namespace std;
void solve(){
    char c;
    cin>>c;
    if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s') cout<<"YES"<<endl;
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