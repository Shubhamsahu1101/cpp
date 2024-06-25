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
    int l;
    cin>>l;
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    int z;
    cin>>z;
    int arrz[z][2];
    forl(i,0,z){
        cin>>arrz[i][0]>>arrz[i][1];
    }
    vector<int> change;
    forl(i,1,l){
        if(arr[i]!=arr[i-1]) change.push_back(i);
    }
    forl(i,0,z){
        int lb=arrz[i][0]-1;
        int ub=arrz[i][1]-1;
        auto it=upper_bound(change.begin(), change.end(), lb);
        // cout<<*it<<endl;
        if(it!=change.end() && *it<=ub && *it-1>=lb){
            cout<<*it<<" "<<*it+1<<endl;
        } else {
            cout<<-1<<" "<<-1<<endl;
        }
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