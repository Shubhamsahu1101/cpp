#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    int d=a+b;
    if((a+b+c)%2!=0){
        cout<<-1<<endl;
        return;
    }
    if(c<d){
        ans+=c;
        d-=c;
        int z=min(a,b);
        z=min(z,d/2);
        ans+=z;
        cout<<ans<<endl;
    }
    else{
        cout<<a+b<<endl;
    }

}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}