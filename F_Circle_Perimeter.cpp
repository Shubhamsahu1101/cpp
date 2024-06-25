#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
   long long r;
    cin >> r;
    long long height = r;
    long long ans = 0;
    for(long long i = 0; i <= r; i++)
    {
        while(i*i+height*height >= (r+1)*(r+1))
        {
            height--;
        }
        long long cop = height;
        while(i*i+cop*cop >= r*r && cop > 0)
        {
            cop--;
            ans++;
        }
    }
    cout << ans*4 << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}