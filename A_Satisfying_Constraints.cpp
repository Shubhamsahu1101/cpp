#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int less,gre,n,l;
    cin>>l;
    int t,x;
    set<int> v;
    forl(i,0,l){
        cin>>t;
            cin>>x;
        if(t==1){
            gre=max(gre,x);
        }
        else if(t==2){
            less=min(less,x);
        }
        else{
            v.insert(x);
        }
    }
        int ans=less-gre+1;
    if(less>gre){
        cout<<0<<endl;
        return;
    }
    else if(less==gre){
        forall(it,v){
            if(less==*it){
        cout<<0<<endl;
        return;

            }
        }
        cout<<1<<endl;
        return;
    }
    else{
        forall(it,v){
            if(*it>=gre && *it<=less){
                ans--;
            }
        }
    }
    if(ans>=0){
        cout<<ans<<endl;
        return;
    }
    cout<<0<<endl;

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}