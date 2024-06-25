#include <bits/stdc++.h>
#define int long long
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
using namespace std;
void solve(){
    int u,l=0,j;
    cin>>u;
    int c[2]={0};
    int g[u][u]={0};
    int temp;

    // cout<<u<<endl;
    
    forl(i,0,u){
        cin>>temp;
        j=u;
        while(j--){
            g[i][j]=temp%10;
            temp/=10;
        }
    }

    // forl(i,0,u){
    //     forl(j,0,u){
    //         cout<<g[i][j]<<" ";
    //     }cout<<endl;
    // }cout<<endl;

    u--;

    int ans=0,z=0;
    while(u-l>0){
        forl(i,l,u){
            c[g[l][u-i+z]]++;
            c[g[i][l]]++;
            c[g[u][i]]++;
            c[g[u-i+z][u]]++;
            // cout<<l<<" "<<i<<" "<<u<<endl;
            ans+=min(c[0],c[1]);
            // cout<<g[l][u-i+z];
            // cout<<g[i][l];
            // cout<<g[u][i];
            // cout<<g[u-i+z][u]<<endl;
            // cout<<c[0]<<" "<<c[1]<<" "<<ans<<endl<<endl;
            c[0]=0;
            c[1]=0;
        }
        l++;u--;z++;
    }
    
    cout<<ans<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int t=1;
   cin>>t;
   forl(tc, 0, t){
      solve();
   }
   return 0;
}