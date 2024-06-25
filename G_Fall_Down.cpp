#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void solve(){
    int r,c; cin>>r>>c;
    string g[r];
    forl(i,0,r){
        cin>>g[i];
    }
    forl(i,0,c){
        // cout<<i<<endl<<endl;
        int l=r-1,u=r-1;
        while(u>-1 && l>-1){
            while(u>0 && g[u].at(i)=='.'){
                // cout<<g[u].at(i)<<" "<<u<<endl;
                u--;
            }
            // cout<<"out"<<endl;
            // cout<<g[u].at(i)<<" "<<u<<endl;
            if(g[u].at(i)=='.') break;
            else if(g[u].at(i)=='o'){
                l=u-1;
                u--;
            }
            else if(g[u].at(i)=='*'){
                g[u].at(i)='.';u--;
                g[l].at(i)='*';l--;
            }
            // cout<<l<<" "<<u<<endl;
        }
        
    }
    forl(i,0,r){
        forl(j,0,c){
            cout<<g[i].at(j);
        }
        cout<<endl;
    }
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