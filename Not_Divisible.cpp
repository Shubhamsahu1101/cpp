#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,temp=2;
    cin>>n;
    while(n--){
        cout<<temp<<" ";
        if(temp==2) temp=3;
        else temp=2;
    }
    cout<<endl;
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