#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int hb(int n) {
    if(n==0)return 0;
    int msb = -1;
    forl (i,0,32) {
        if (n & (1 << i)) {
            msb = i;
        }
    }
    return msb;
}
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a+1!=c){
        cout<<-1<<endl;
        return;
    }
    if(a==0){
        cout<<b+c-1<<endl;
        return;
    }
    int ans=hb(c*2-1);

    int lastlvl=1<<ans;
    lastlvl-=c;
    b-=lastlvl;
    b=max(b,(int)0);
    ans+=(b+c-1)/c;
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