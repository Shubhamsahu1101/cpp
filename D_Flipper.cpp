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
void check(int arr[], int c[], int i, int j, int l){
    int y=0;
    int temp[l];
    forl(x,j+1,l){
        c[y++]=arr[x];
    }
    forr(x,j,i){
        c[y++]=arr[x];
    }
    forl(x,0,i){
        c[y++]=arr[x];
    }
}
void solve(){
    int l;
    cin>>l;
    int t,arr[l],c[l]={0};
    forl(i,0,l){
        cin>>arr[i];
    }
    int i=1,x=0,y=1;
    while(i<l-1){
        if(arr[i+1]>arr[y+1]) y=i;
        i++;
    }
    x=y;
    while(x>0 && arr[x]>arr[0]) x--;
    // cout<<x<<" "<<y<<endl;
    check(arr,c,x,y,l);
    printarr(c);
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