#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int int64_t
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int a,b,r;
    cin>>a>>b>>r;
    int mn=min(a,b);
    int mx=max(a,b);
    int c=0;
    bool f=true;
    forr(i,62,0){
        int msk=int(1)<<i;
        if((mx&msk)==msk && (mn&msk)==0){
            if(f){
                f=false;continue;
            }
            if((msk|c) <= r) {
                c|=msk;mx^=msk;mn^=msk;
            }
        }
    }
    cout<<mx-mn<<endl;
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