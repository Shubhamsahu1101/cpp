#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    int k,n,m,i=0,j=0;
    cin>>k>>n>>m;
    int arr1[n];
    int arr2[m];
    vector<int> v;
    forl(i,0,n){
        cin>>arr1[i];
    }
    forl(i,0,m){
        cin>>arr2[i];
    }
    while(i<n || j<m){
        if(i<n && arr1[i]==0){
            v.pb(0);
            k++;
            i++;
        }
        else if(j<m && arr2[j]==0){
            v.pb(0);
            k++;
            j++;
        }
        else if(i<n && arr1[i]<=k){
            v.pb(arr1[i]);
            i++;
        }
        else if(j<m && arr2[j]<=k){
            v.pb(arr2[j]);
            j++;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    print(v);
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