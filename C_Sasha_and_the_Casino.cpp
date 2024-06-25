#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

void solve() {
    int k, x, a;
    cin>>k>>x>>a;
    int invested=1, curr;
    if(k==1) no;

    forl(i,0,x){
        curr=(invested+k-2)/(k-1);
        if(curr*(k-1)==invested) curr++; 
        // cout<<invested<<" "<<curr<<endl;
        if(curr+invested>a){ no;}
        invested+=curr;
    }
    

    yes;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}