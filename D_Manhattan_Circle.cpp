#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    forl(i,0,n){
        forl(j,0,m){
            cin>>arr[i][j];
        }
    }
    int sumx=0;
    int sumy=0;
    int c=0;
    forl(i,0,n){
        forl(j,0,m){
            if(arr[i][j]=='#'){
                sumx+=i+1;
                sumy+=j+1;
                c++;
            }
        }
    }
    cout<<sumx/c<<" "<<sumy/c<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}