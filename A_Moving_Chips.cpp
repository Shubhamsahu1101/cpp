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
int bts(int arr[], int x, int l){
    if(x>=l-1) return 0;
    int c=0;
    int d=0;
    forl(i,x,l){
        if(arr[i]==1) c++;
    }
    forl(i,x,x+c){
        if(arr[i]==0) d++;
    }
    if(d==0) return 0;

    return d+bts(arr, x+c, l);
}
void solve(){
    int l;
    cin>>l;
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    int c=0;
    forl(i,0,l){
        if(arr[i]==1){
            c=i;break;
        }
    }
    int ans=l;
    ans=bts(arr, c, l);
    cout<<ans<<endl;
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