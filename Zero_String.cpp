#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int l,one=0,zero=0;
    string str;
    cin>>l>>str;
    for(int i=0;i<l;i++){
        if(str[i]=='1') one++;
        else zero++;
    }
    cout<<min(one,zero+1)<<endl;
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