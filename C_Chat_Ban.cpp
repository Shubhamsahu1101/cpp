#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int emotes(int n, int k) {
    if(n>k){
        int mid = (k*(k+1))/2;
        int rem = (2*k-1)-n;
        int lessthanmid=(k*(k-1))/2;
        rem = (rem*(rem+1))/2;
        rem=lessthanmid-rem;
        return rem+mid;
    }
    return (n*(n+1))/2;
}
void solve() {
    int k,x;
    cin>>k>>x;
    int s=1, e=2*k-1;
    int ans=0;
    while(s<=e){
        int m = (s+e)/2;
        // cout<<s<<" "<<m<<" "<<e<<"    "<<emotes(m,k)<<endl;
        if(emotes(m, k)<=x) {
            ans=m;
            s=m+1;
        }
        else {
            e=m-1;
        }
    }
    if(emotes(ans, k)<x && ans!=2*k-1) ans++;
    cout<<ans<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}