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
    int n,k;
    cin>>n>>k;
    int arr[n];
    int m=INT64_MIN;
    int x=0;
    forl(i,0,n){
        cin>>arr[i];
        if(arr[i]>arr[x]) x=i;
    }
    
    int j=0;

    while(j<n-1){
        if(k==0){
            cout<<j+1<<endl;
            return;
        }
        j=0;
        while(j<n && arr[j+1]<=arr[j]) j++;
        arr[j]++;
        k--;
        // cout<<j<<endl;
    }
    cout<<-1<<endl;
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