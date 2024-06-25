#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l,m,n; cin>>l>>m>>n;
    if(l && m && m%2==0){
        cout<<1;m--;
    }
    if(l){
        forl(i,0,l+1){
            cout<<0;
        }
    }
    int x=1;
    if(l && m){
        forl(i,0,m){
            cout<<x;
            if(x==1) x=0;
            else x=1;
        }
    }
    else if(m){
        if(!l && m%2==1) x=0;
        forl(i,0,m+1){
            cout<<x;
            if(x==1) x=0;
            else x=1;
        }
    }
    if(m && n){
        forl(i,0,n){
            cout<<1;
        }
    }
    else if(n){
        forl(i,0,n+1){
            cout<<1;
        }
    }
    
    cout<<endl;

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