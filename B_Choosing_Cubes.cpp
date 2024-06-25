#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    int n,f,k;
    cin>>n>>f>>k;
    k--;
    vector<int> arr(n);
    forl(i,0,n) cin>>arr[i];
    arr.push_back(-1);
    f=arr[f-1];
    sort(arr.begin(), arr.end(), greater<int>());
    int i=0;
    while(i<n) {
        if(arr[i]>f) i++;
        else{
            int start=i;
            while(i<n-1 && arr[i]==f && arr[i]==arr[i+1]) i++;
            // cout<<i<<" "<<k<<" "<<f<<endl;
            if(i<n && start<=k && i>k) {
                cout<<"MAYBE"<<endl;
            return;
            }
            else if(i<=k) {
                cout<<"YES"<<endl;
            return;
            }
            break;
        }
    }
    cout<<"NO"<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}