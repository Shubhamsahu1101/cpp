#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int n,m;cin>>n>>m;int t=n;
    int two=0,five=0;
    int x1=n,z1=0,temp=n;
    while(x1){
        if(x1%10==0) z1++;
        else break;
        x1/=10;
    }
    // cout<<n<<"  "<<m<<"   ";
    while(n%2==0){
        n/=2;two++;
    }
    while(n%5==0){
        n/=5;five++;
    }
    // cout<<two<<" "<<five<<endl;
    int x=1;
    while(x*5<=m && two > five){
        x*=5;two--;
    }
    while(x*2<=m && five > two){
        x*=2;five--;
    }
 
    int i=10;
    // cout<<"x  "<<x<<endl;
    while(x*i<=m){
        x*=i;
    }
    
    // cout<<"x  "<<x<<endl;
    i=2;
    while(x*i<=m){
        i++;
    }x*=--i;
    // cout<<"x  "<<x<<endl;
    int ans=x*t;
    int x2=ans,z2=0;
    while(x2){
        if(x2%10==0) z2++;
        else break;
        x2/=10;
    }
    if(z1>=z2) cout<<temp*m<<endl;
    else cout<<ans<<endl;
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