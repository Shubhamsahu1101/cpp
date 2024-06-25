#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define yes cout<<"YES"<<endl; return;
#define no cout<<"NO"<<endl; return;
#define int long long
using namespace std;

void solve() {
    int l;
    cin>>l;
    vector<int> a(l);
    vector<int> b(l);
    forl(i,0,l) cin>>a[i];
    forl(i,0,l) cin>>b[i];
    int m;
    cin>>m;
    vector<int> c(m);
    forl(i,0,m) cin>>c[i];
    
    set<int> bset;
    forl(i,0,l){
        bset.insert(b[i]);
    }
    map<int, int> cmap;
    forl(i,0,m){
        cmap[c[i]]++;
    }

    forl(i,0,l){
        if(a[i]!=b[i]){
            if(cmap[b[i]]>0){
                cmap[b[i]]--;
            }
            else{
                no;
            }
        }
    }

    int t=c[m-1];
    if(bset.find(t)==bset.end()){
        yes;
    }
    yes;

}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}