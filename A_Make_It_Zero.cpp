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
    int c=-1;
    forl(i,0,l){
        if(arr[i]==0){
            c=i+1;
            break;
        }
    }
    if(l%2==0){
        cout<<2<<endl;
        cout<<1<<" "<<l<<endl;
        cout<<1<<" "<<l<<endl;
    }
    else{
        cout<<4<<endl;
        cout<<1<<" "<<l<<endl;
        cout<<1<<" "<<l-1<<endl;
        cout<<l-1<<" "<<l<<endl;
        cout<<l-1<<" "<<l<<endl;
    }
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