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
    int n,k,c=0;
    cin>>n>>k;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    n--;
    int l=k-1;
    int r=1;
    int m=0,e=0,sum=0,ans=-1;
    while(l>=r){
        m=(l+r)/2;
        e=(k-1)-m+1;
        sum=(e*(2*m+e-1))/2;
        // cout<<e<<" "<<sum<<endl;
        if(sum>=n){
            ans=e;
            r=m+1;
        }
        else{
            l=m-1;
        }
    }
    cout<<ans<<endl;
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