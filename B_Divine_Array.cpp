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
    int l;
    cin>>l;
    map<int,int> m;
    int arr[l+1][l]={0};
    
    forl(i,0,l){
        cin>>arr[0][i];
    }
    
    forl(i,1,l+1){
        m.clear();
        forl(j,0,l){
            m[arr[i-1][j]]++;
        }
        forl(j,0,l){
            arr[i][j]=m[arr[i-1][j]];
        }
    }

    int n,x,k;
    cin>>n;
    forl(i,0,n){
        cin>>x>>k;
        if(k>=l) cout<<arr[l][x-1]<<endl;
        else cout<<arr[k][x-1]<<endl;
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