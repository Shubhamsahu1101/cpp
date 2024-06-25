#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int row[9][9]={0};
    int col[9][9]={0};
    int box[9][9]={0};
    int arr[9][9]={0};
    forl(i,0,9){
        forl(j,0,9){
            cin>>arr[i][j];
        }
    }
    int val;bool f=true;
    forl(i,0,9){
        forl(j,0,9){
            if(arr[i][j]==-1) continue;
            val=arr[i][j]-1;
            if(row[i][val]==1 || col[j][val]==1 || box[(i/3)*3+(j/3)][val]==1) f=false;
            row[i][val]=1; col[j][val]=1; box[(i/3)*3+(j/3)][val]=1;
        }
    }
    if(f) cout<<1<<endl;
    else cout<<0<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}