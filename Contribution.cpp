#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int a,b;
    cin>>a>>b;
    int t;
    int ans=0;
    while(a){
        t=a%10;
        a/=10;
        if(t==1){
            ans+=1;
        }
        else if(t==3){
            ans+=4;
        }
        else if(t==5){
            ans+=6;
        }
        else if(t==7){
            ans+=9;
        }
    }
    while(b){
        t=b%10;
        b/=10;
        if(t==1){
            ans-=1;
        }
        else if(t==3){
            ans-=4;
        }
        else if(t==5){
            ans-=6;
        }
        else if(t==7){
            ans-=9;
        }
    }
    cout<<ans<<endl;
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