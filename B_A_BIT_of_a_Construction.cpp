#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int hb(int n) {
    int ans = 1;
    while (n >>= 1) {
        ans*=2;
    }
    return ans;
}
bool zz(int n) {
    int ans = 1;
    while (n) {
        if((n&1)==0){
            return true;
        }
        n>>=1;
    }
    return false;
}
void solve() {
    int n,k,sum=0;
    cin>>n>>k;
    if(n==1) {
        cout<<k<<endl;
        return;
    }
    
    forl(i,0,n-2){
        cout<<0<<" ";
    }

    if(zz(k)){ 
        int z=hb(k)-1;
        cout<<z<<" ";
        cout<<k-z<<endl;
        return;
    }

    cout<<k<<" ";
    cout<<0<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}