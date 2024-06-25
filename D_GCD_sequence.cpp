#include <bits/stdc++.h>
#define forl(i,a,b) for(int i=a;i<b;i++)
#define forall(it,cont) for(auto it=cont.begin();it!=cont.end();it++)
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
#define int long long
using namespace std;
bool check(vector<int> a, int l, int r){
    vector<int> temp;
    forl(i,0,l){
        if(i==r) continue;
        temp.push_back(a[i]);
    }
    int gg=-1;
    int gg1=-1;
    // cout<<r<<endl;
    // print(temp);
    forl(i,0,l-2) {
        gg1=__gcd(temp[i], temp[i+1]);
        // cout<<gg<<" "<<gg1<<endl;
        if(gg1>=gg) {
            gg=gg1;
        } else {
            return false;
        }
    }
    return true;
}
void solve() {
    int l;
    cin>>l;
    vector<int> a(l);
    forl(i,0,l) cin>>a[i];
    int gg=-1;
    int gg1=-1;

    int index=-1;

    forl(i,0,l-1) {
        gg1=__gcd(a[i], a[i+1]);
        if(gg1>=gg) {
            gg=gg1;
        }
        else {
            index=i;
            break;
        }
    }
    if(index==-1) {
        cout<<"YES"<<endl;
        return;
    }
    if(index!=0)if(check(a, l, index-1)){
        cout<<"YES"<<endl;
        return;
    }
    if(check(a, l, index)){
        cout<<"YES"<<endl;
        return;
    }
    if(index!=l-1) if(check(a, l, index+1)){
        cout<<"YES"<<endl;
        return;
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