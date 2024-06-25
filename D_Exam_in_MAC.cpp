#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define ll long long
using namespace std;

void solve() {
    ll l,c;
    cin>>l>>c;
    set<ll> nums;
    forl(i,0,l){
        ll t; cin>>t;
        nums.insert(t);
    }
    ll ans = ((c+1)*(c+2))/2;
    ll even=0,odd=0;
    forall(it,nums){
        ans-=((*it)/2+1);
        ans-=(c-*it+1);
        if(*it%2==0) even++;
        else odd++;
    }
    ans+=(even*(even+1))/2;
    ans+=(odd*(odd+1))/2;
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}