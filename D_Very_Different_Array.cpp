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
    int n,m;
    cin>>n>>m;
    int x[n];
    int y[m];
    forl(i,0,n) cin>>x[i];
    forl(i,0,m) cin>>y[i];
    sort(x,x+n);
    sort(y,y+m);
    int ans=0;

    int lb1=0,lb2=0,ub1=n-1,ub2=m-1;
    while(lb1<=ub1){
        if(abs(x[lb1]-y[ub2])>abs(x[ub1]-y[lb2])){
            ans+=abs(x[lb1]-y[ub2]);lb1++;ub2--;
        }
        else{
            ans+=abs(x[ub1]-y[lb2]);lb2++;ub1--;
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