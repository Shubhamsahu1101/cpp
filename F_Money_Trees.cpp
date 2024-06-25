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
    int l,k;
    cin>>l>>k;
    int fruits[l];
    int tree[l];
    forl(i,0,l) cin>>fruits[i];
    forl(i,0,l) cin>>tree[i];
    map<int,int> mp;
    mp[0]++;
    int s=0,e=0,fsum=fruits[0];
    forl(i,0,l){
        if(fruits[i]<=k) mp[1]++;
    }
    while(e<l-1){
        if(fsum>=k){
            fsum-=fruits[s];
            s++;
        }
        else if(tree[e]%tree[e+1]==0){
            e++;
            fsum+=fruits[e];
        }
        else{
            s=e+1;
            e++;
            fsum=fruits[s];
        }
        // cout<<s<<" "<<e<<"  "<<e-s+1<<" "<<fsum<<endl;
        if(fsum<=k && e-s+1>0) mp[e-s+1]++;
    }
    cout<<(--mp.end())->first<<endl;
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