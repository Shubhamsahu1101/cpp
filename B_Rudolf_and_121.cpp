#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int l;
    cin>>l;
    vector<int> arr(l);
    forl(i,0,l) cin>>arr[i];

    forl(i,0,l-2){
        int x=arr[i];
        if(x<0){
            cout<<"NO"<<endl;
            return;
        }
        arr[i]-=x;
        arr[i+1]-=x;
        arr[i+1]-=x;
        arr[i+2]-=x;
    }
    if(arr[l-2]!=0){
        
            cout<<"NO"<<endl;
            return;
    }
    if(arr[l-1]!=0){
        
            cout<<"NO"<<endl;
            return;
    }
    
    cout<<"YES"<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}