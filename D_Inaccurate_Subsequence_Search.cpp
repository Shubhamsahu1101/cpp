#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    forl(i,0,n) cin>>a[i];
    int b[m];
    map<int,int> check;
    forl(i,0,m) {
        cin>>b[i];
        check[b[i]]++;
    }
    
    map<int,int> freq;
    int c=0;
    forl(i,0,m) {
        freq[a[i]]++;
        if(freq[a[i]]<=check[a[i]]){
            c++;
        }
    }
    // cout<<"c: "<<c<<endl;
    int s=0, e=m-1;
    int ans=0;
    while(e<n){
        if(c>=k){
            ans++;
        }
        freq[a[s]]--;
        if(freq[a[s]]<check[a[s]]){
            c--;
        }
        s++;
        e++;
        if(e==n) break;
        freq[a[e]]++;
        if(freq[a[e]]<=check[a[e]]){
            c++;
        }
    // cout<<"c: "<<c<<endl;
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