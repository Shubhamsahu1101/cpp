#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}
void solve() {
    int l;
    cin>>l;
    int arr[l];
    forl(i,0,l) cin>>arr[i];

    int c=1;
    forl(i,0,l){
        c=lcm(c,arr[i]);
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