#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    forl(i,0,r){
        forl(j,0,c){
            cin>>arr[i][j];
        }
    }
    // forl(i,0,r){
    //     forl(j,0,c){
    //         cout<<arr[i][j];
    //     }cout<<endl;
    // }cout<<endl;cout<<endl;

    int s=0,ans=0;
    int x,y;
    forl(i,0,r){
        forl(j,0,c){
            s+=arr[i][j];
            x=i,y=j;
            while(x<r-1 && y<c-1){
                x++;y++;
                s+=arr[x][y];
                // cout<<arr[x][y]<<endl;
            }
            x=i,y=j;
            while(x<r-1 && y>0){
                x++;y--;
                s+=arr[x][y];
                // cout<<arr[x][y]<<endl;
            }
            x=i,y=j;
            while(x>0 && y<c-1){
                x--;y++;
                s+=arr[x][y];
                // cout<<arr[x][y]<<endl;
            }
            x=i,y=j;
            while(x>0 && y>0){
                x--;y--;
                s+=arr[x][y];
                // cout<<arr[x][y]<<endl;
            }
            // cout<<endl<<endl;
            // cout<<"fsum  "<<s<<endl<<endl;
            ans=max(ans,s);s=0;
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