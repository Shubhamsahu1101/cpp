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
    long double n,m,k;
    cin>>n>>m>>k;
    long double t;
    long double suma=0,sumb=0;
    forl(i,0,n){
        cin>>t;
        suma+=t;
    }
    suma/=n;
    forl(i,0,m){
        cin>>t;
        sumb+=t;
    }
    int c=0;
    cout<<setprecision(10)<<suma<<endl;
    cout<<setprecision(10)<<sumb<<endl;
    cout<<setprecision(10)<<k/n<<endl;
    cout<<setprecision(10)<<1/m<<endl;
    // while(suma<=sumb){
    //     if(sumb-0>k-suma){
    //         sumb+=1/m;
    //     }
    //     else{
    //         suma+=k/n;
    //     }
    //     c++;
    // }
    cout<<c<<endl;
    
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