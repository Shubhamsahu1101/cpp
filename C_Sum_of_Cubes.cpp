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

 int arr[10000];
bool bs(int l){
    int s=0,e=9999,m;
    forl(i,0,10000){
        s=0,e=9999;
        while(s<=e){
            m=s+(e-s)/2;
            if(arr[i]+arr[m]>l) e=m-1;
            else if(arr[i]+arr[m]<l) s=m+1;
            else return true;
        }
    }
    return false;
}
void solve(){
    int l;
    cin>>l;
    if(bs(l)) yes;
    else no;
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
     cin>>t;
     forl(i,0,10000){
      arr[i]=(i+1)*(i+1)*(i+1);
     }
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}