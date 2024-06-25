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
    int l;
    cin>>l;
    int arr1[l];
    int arr2[l];
    int a,b,x=0,y=-1,index;
    forl(i,0,l){
        cin>>arr1[i]>>arr2[i];
        if((y-x)<(arr2[i]-arr1[i])){
            y=arr2[i];
            x=arr1[i];
            index=i+1;
        }
    }
    // cout<<x<<" "<<y<<endl;
    // printarr(arr1);
    // printarr(arr2);
    forl(i,0,l){
        if((x<=arr1[i])&&(arr2[i]<=y)) continue;
        else{
            cout<<-1<<endl;return;
        }
    }
    cout<<index<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}