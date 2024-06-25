#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    map<int, set<int>> x;
    map<int, set<int>> y;
    int arr[k][2];
    vector<pair<int,int>> area;
    forl(i,0,k){
        int t1,t2;
        cin>>t1>>t2;
        arr[i][0]=t1;arr[i][1]=t2;
        x[t1].insert(t2);
        y[t2].insert(t1);
    }
    int r=1;
    forl(i,0,n){

    }

// x.find(t1)==--x.end() && y.find(t2)==y.begin()  &&   x[t1].find(t2)==((x[t1].begin())) && y[t2].find(t1)==(--(y[t2].end()))
vector<int> ans;
    forl(i,0,k) {
        int t1,t2;
        t1=arr[i][0];
        t2=arr[i][1];
        if( (  x[t1].find(t2)==x[t1].begin() && x.find(t1)==--x.end() )  ||  ( y[t2].find(t1)==--y[t2].end() && y.find(t2)==y.begin() ) ){
                ans.push_back(1);
            area.push_back({t1,t2});
        }
        else ans.push_back(0);
    }
    int total=0;
    sort(area.begin(), area.end());
    if((--area.end())->first!=n){
        area.push_back({n,m+1});
    }
    int prev=0;
    forl(i,0,area.size()){
        int t1,t2;
        t1=area[i].first;
        t2=area[i].second;
        total+=(t1-prev)*(t2-1);
        prev=t1;
        cout<<t1<<" "<<total<<endl;
    }

    cout<<total<<endl;
    print(ans);
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}