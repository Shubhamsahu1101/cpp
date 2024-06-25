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
    int a,b;
    cin>>a>>b;
    int k=0,c=0;
    if(b==1) cout<<0<<endl;
    else if(a>=b) cout<<b<<endl;
    else cout<<a+1<<endl;

    forl(i,0,a){
        if(i<=b-2) k=c;c++;
        forl(j,0,b){
            if(k==b) k=0;
            cout<<k<<" ";
            k++;
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