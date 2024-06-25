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
    int l,t;
    cin>>l;
    vector<pair<int,int>> arr(l+1);
    vector<int> pfx(l+1);
    vector<int> ans(l+1);
    arr[0]={0,0};
    pfx[0]=0;
    forl(i,1,l+1){
        cin>>t;
        arr[i]={t,i};
    }
    sort(arr.begin(),arr.end());
    forl(i,1,l+1){
        pfx[i]=arr[i].first+pfx[i-1];
    }
    forr(i,l,1){
        if(i==l) ans[i]=i;
        else{
            if(pfx[i]>=arr[i+1].first) ans[i]=ans[i+1];
            else ans[i]=i;
        }
    }
    map<int,int> m;
    forl(i,1,l+1){
        m[arr[i].second]=ans[i]-1;
    }
    forall(it,m){
        cout<<it->second<<" ";
    }cout<<endl;
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