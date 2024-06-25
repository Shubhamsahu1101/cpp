#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    int arr[l][l];
    int x=1;
    forl(i,0,l){
        for(int j=0;j<l;j+=2){
            arr[i][j]=x;
            x++;
        }
    }
    forl(i,0,l){
        for(int j=1;j<l;j+=2){
            arr[i][j]=x;
            x++;
        }
    }
    forl(i,0,l){
        forl(j,0,l){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
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