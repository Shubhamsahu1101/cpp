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
    int n,q;
    cin>>n>>q;
    int arr[n];
    int arr2[q];
    forl(i,0,n){
        cin>>arr[i];
    }
    forl(i,0,q){
        cin>>arr2[i];
    }
    vector<int> v;
    vector<int> v2;
    int m=INT64_MAX;
    forl(i,0,q){
        if(arr2[i]<m){
            m=arr2[i];
            v.pb(arr2[i]);
        }
    }
    forl(i,0,v.size()){
        v2.pb(pow(2,v[i]-1));
    }
    // print(v);
    // print(v2);
    forl(i,0,n){
        int j=0;
        while(j<32){
            if((1<<j)&(arr[i])){
                break;
            }j++;
        }
        forl(k,0,v2.size()){
            if(j>=v[k]){
                j=v[k]-1;
                arr[i]+=v2[k];
            }
        }
    }
    printarr(arr);
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