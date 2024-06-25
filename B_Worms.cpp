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
    int arr[l+1]={0};
    forl(i,1,l+1){
        cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
    }
    int w,t;
    cin>>w;
    while(w--){
        cin>>t;
        int s=1,e=l;
        int m=(s+e)/2;
        while(s<=e){
            m=(s+e)/2;
            if(t>arr[m]) s=m+1;
            else if(t<=arr[m-1]) e=m-1;
            else break;
        }
        cout<<m<<endl;
    }
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