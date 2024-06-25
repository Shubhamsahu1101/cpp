#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
int pw(int b,int exp,int m){
    int ans=1;
    b%=m;
    while(exp--){
        ans*=b;
        ans%=m;
    }
    return ans;
}
void solve(){
    int a,n; cin>>a>>n;
    if(a<0) cout<<1<<endl;
    else cout<<pw(a,n/2,1000000007)<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
     cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}