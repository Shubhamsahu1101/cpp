#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
    int n, a, b;
    cin>>n>>a>>b;
    int z=min(n,b);
    // cout<<min(z,b-a+1)<<endl;
    int i=min(z,b-a+1);
    int zero=0;
    i=max(zero,i);

    int ans=0;
    ans+=((b+1)*i);
    ans-=((i*(i+1))/2);
    ans+=((n-i)*a);
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