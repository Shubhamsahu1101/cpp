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
    int l;
    cin>>l;
        int ans=-1;
        int anssum=0;
        int maxanssum=0;
    forl(i,2,l+1){
        anssum=0;
        int j=i;
        int x=1;
        while(j*x<=l){
            anssum+=j*x;
            x++;
        }
        // cout<<anssum<<endl;
        if(anssum>maxanssum){
            maxanssum=anssum;
            ans=i;
        }

    }
    cout<<ans<<endl;
    // cout<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}