#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
#define yes {cout << "YES" << endl; return;}
#define no {cout << "NO" << endl; return;}
using namespace std;

bool check(int arr[], int l, int x){
    int g=0;
    forl(i,0,x){
        for(int j=i; j+x<l; j+=x){
            g=gcd(g,abs(arr[j]-arr[j+x]));
        }
    }
    return g!=1;
}

void solve() {
    int l;
    cin>>l;
    int arr[l];
    forl(i,0,l) cin>>arr[i];
    if(l==1){
        cout<<1<<endl;
        return;
    }
    int ans=0;
    for(int i=1;i*i<=l;i++){
        if(l%i==0) {
            ans+=check(arr, l, i);
            if(l/i!=i) ans+=check(arr, l, l/i);
            // if(check(arr, l, i)) cout<<"i: "<<i<<endl;
        }
    }
    cout<<ans<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}