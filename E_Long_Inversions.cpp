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
    string s;
    cin>>s;
    int n=s.size();
    for(int i=n;i>1;i--){
        string temp = s;
        int j=0;
        cout<<"i: "<<i<<endl;
        while(j<n){
            int c=0;
            if(temp.at(j)=='1'){
                c++;j++;
            }
            while(j<n && temp.at(j)!='1' && ++c<=i){
                j++;cout<<"         "<<j<<endl;
            }
            if(j>n-i && j<n) break;
            cout<<"j:   "<<j<<endl;
        }
        if(j>=n) {
            cout<<i<<endl;
            return;
        }
    }
    cout<<1<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}