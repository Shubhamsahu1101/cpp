#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
int ini=0;
int dfs(map<int,set<int>>& m, int i, vector<bool>& vis) {
    if(vis[i-1]) return 0;
    vis[i-1]=true;
    int ans=0;
    for(auto e: m[i]) {
        ans=max(ans, dfs(m, e, vis));
    }
    return ans+1;
}
int mid(map<int,set<int>>& m, int i, int des, vector<bool>& vis, vector<int>& path) {
    if(vis[i-1]) return -1;
    vis[i-1]=true;

    if(i==des) {
        int l=path.size();
        ini=l/2;
        return path[(l-1)/2];
    }

    int ans=-1;
    for(auto e: m[i]) {
        path.push_back(e);
        ans=mid(m, e, des, vis, path);
        if(ans!=-1) return ans;
        path.pop_back();
    }
    return ans;
}
void solve() {
    int l;
    cin>>l;
    int a,b,t1,t2; cin>>a>>b;
    map<int,set<int>> m;
    vector<bool> vis(l,false);
    vector<bool> vis1(l,false);
    vector<int> path;
    forl(i,0,l-1) {
        cin>>t1>>t2;
        m[t1].insert(t2);
        m[t2].insert(t1);
    }
    // cout<<dfs(m, a, vis);
    path.push_back(a);
    int mm = mid(m, a, b, vis, path);
    int depth=dfs(m,mm,vis1);depth--;
    // cout<<depth<<endl;
    // cout<<ini<<endl;
    cout<<2*(l-1)-depth+ini<<endl;

}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}