#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
vector<int> v;

    
void solve(){
    int l; cin>>l;
    if(l==1){
        cout<<-1<<endl;
        return;
    }
    auto it = lower_bound(v.begin(), v.end(), l);
    int c=distance(v.begin(), it);
    // cout<<l-c*c<<endl;
    if(c>1000000 || l-(c*c)>1000000){
        cout<<-1<<endl;
        return;
    }
    cout<<c<<" "<<c<<" "<<l-(c*c)<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
     cin>>t;
    forl(i,1,1000005){
        v.pb(i*i);
    }
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}