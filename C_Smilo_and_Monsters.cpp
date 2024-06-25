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
    sort(arr,arr+l);
    forl(i,1,l){
        arr[i]+=arr[i-1];
    }
    int s=0,e=l-1,m;
    // printarr(arr);
    while(s<e){
        m=(s+e)/2;
        if(arr[m]>arr[l-1]-arr[m]){
            e=m-1;
        }
        else if(arr[m]<arr[l-1]-arr[m]){
            s=m+1;
        }
        else break;
    }
    // cout<<m<<endl;
    int c=0;
    if(m<0) m=0;
    if(m>l-1) m=l-1;
    if(arr[m]<arr[l-1]-arr[m]) m++;
    if(arr[m]>=arr[l-1]-arr[m]){
        c+=l-1-m;
        int t=arr[l-1]-arr[m];
        c+=t;
        t=arr[m]-t;
        if(t==1){
            c++;
        }
        else if(t!=0){
            if(t%2!=0) c++;
            c+=t/2;
            c++;
        }
    }
    cout<<c<<endl;
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