#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int l,t,mon;
    cin>>l;
    vector<pair<int,int>> v(l);
    int maxlvl=0;
    forl(i,0,l){
        cin>>t;
        maxlvl=-1;
        forl(j,0,t){
            cin>>mon;
            if(maxlvl<mon) maxlvl=mon+1;
            maxlvl++;
        }
        v[i]={maxlvl-1,t};
    }
    sort(v.begin(), v.end());
    forl(i,0,l){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    maxlvl=-1;
    forl(i,0,l){
        if(maxlvl<v[i].first) maxlvl=v[i].first+1;
        maxlvl+=v[i].second;
    }
    maxlvl-=v[l-1].second;
    cout<<maxlvl<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}