#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    map<int, int> m;
    forl(i,0,n){
        cin>>arr[i];
        m[arr[i]]++;
    }

    int prevfirst=0, add=0, mul=0, perm=0;


    // for(auto it: m){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    
    forall(it,m){
        mul = it->first-prevfirst;

        if(k>=mul*add){
            k-=mul*add;
        } else if(k>=add) {
            int i=k/add;
            perm+=i;
            k-=i*add;
        cout<<mul<<" "<<add<<" "<<k<<" "<<perm<<endl;
            break;
        } else break;

        perm += mul;
        add+=it->second;
        prevfirst=it->first;
        cout<<mul<<" "<<add<<" "<<k<<" "<<perm<<endl;
    }
    int total=m.size();
    if(k>=total){
        int i=k/total;
        perm+=i;
        k-=i*n;
    }
    int ans=perm*n;

    int x=0;
    while(x<n){
        if(arr[x++]>perm) ans++;
    }
    int y=n-1;
    while(y>x){
        if(arr[y--]>perm) ans++;
    }
    // cout<<ans<<endl;
    
    ans-=(n-1);

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