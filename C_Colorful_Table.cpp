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
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<int> maxpfx(n);
    vector<int> maxsfx(n);
    map<int,int> mp;
    forl(i,0,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    int m=INT64_MIN;
    forl(i,0,n){
        m=max(m,a[i]);
        maxpfx[i]=m;
    }
    m=INT64_MIN;
    forl(i,0,n){
        m=max(m,a[n-1-i]);
        maxsfx[i]=m;
    }
    forall(it,mp){
        if(it->second){
            int y=(lower_bound(maxpfx.begin(),maxpfx.end(),it->first)-maxpfx.begin());
            int z=n-(lower_bound(maxsfx.begin(),maxsfx.end(),it->first)-maxsfx.begin());
            it->second=abs(z-y)*2;
        }
    }
    forl(i,1,k+1){
        cout<<mp[i]<<" ";
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