#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;

void solve() {
    string s;
    cin>>s;
    int l = s.length();
    int c=0;
    bool f = false;
    forl(i,1,l){
        if(s.at(i)=='1' && s.at(i-1)=='0') f=true;
        if(s.at(i)!=s.at(i-1)) c++;
    }
    if(!f)c++;
    cout<<c<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}