#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    if((n/k)>=m){
        cout<<m<<endl;
    }
    else{
        if((k-1)>(m-(n/k))){
            cout<<(n/k)-1<<endl;
        }
        else{
            if((m-(n/k))%(k-1)){
                cout<<((n/k)-(((m-(n/k))/(k-1))+1))<<endl;
            }
            else{
                cout<<(n/k)-((m-(n/k))/(k-1))<<endl;
            }
        }
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