#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int l;
    cin>>l;
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    int ans=1;
    forl(i,0,20){
        int x=(1<<i);
        int j=0;
        while(j<l){
            int c=0;
            while(j<l && (arr[j]&x)==0){
                c++;j++;
            }
            // cout<<i<<"   "<<j<<"   "<<c<<" "<<ans<<endl;
            if(c<l) ans=max(c+1,ans);
            j++;
        }
    }
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