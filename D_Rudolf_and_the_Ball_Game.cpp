#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void zz(set<int> &ans, int arr1[], char arr2[], int n, int m, int curr, int i, unordered_map<int,unordered_set<int>> &mp) {
    // cout<<curr+1<<" "<<i<<endl;
    if(mp.find(curr)!=mp.end() && mp[curr].find(i)!=mp[curr].end()){
        return;
    }
    mp[curr].insert(i);
    if(i==m){
        // cout<<endl;
        ans.insert(curr);
        return;
    }
    int z=arr1[i];
    char check = arr2[i];
    int nxt0 = (int)((curr+z)%n);
    int nxt1 = (int)(curr-z);
    if(nxt0==0){
        nxt0=n;
    }
    if(nxt1==0){
        nxt1=n;
    }
    if(nxt1<0){
        nxt1+=n;
    }

    if(check=='?'){
        zz(ans, arr1, arr2, n, m, nxt0, i+1, mp);
        zz(ans, arr1, arr2, n, m, nxt1, i+1, mp);
    }
    else if(check == '0'){
        zz(ans, arr1, arr2, n, m, nxt0, i+1, mp);
    }
    else{
        zz(ans, arr1, arr2, n, m, nxt1, i+1, mp);
    }
}

void solve() {
    int n,m,x;
    cin>>n>>m>>x;
    int arr1[m];
    char arr2[m];
    forl(i,0,m){
        cin>>arr1[i]>>arr2[i];
    }
    set<int> ans;
    unordered_map<int,unordered_set<int>> mp;
    zz(ans, arr1, arr2, n, m, x, 0, mp);
    cout<<ans.size()<<endl;
    forall(it,ans){
        cout<<*it<<" ";
    }cout<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}