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
    int arr[l+1];
    forl(i,0,l){
        cin>>arr[i+1];
    }
    int x=1,y=2;
    while(pow(2,y)<=l){
        forl(i,pow(2,x)+1,pow(2,y)){
            if(arr[i]>arr[i+1]){
                no;
                return;
            }
        }
        x++;y++;
    }
    forl(i,pow(2,y-1)+1,l){
        if(arr[i]>arr[i+1]){
            no;
            return;
        }
    }
    yes;
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