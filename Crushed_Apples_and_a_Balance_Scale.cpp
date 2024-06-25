#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
set<int> s;
void br(int m){
    if(m<1) return;
    s.insert(m);
    if(m%2==0) br(m/2);
}
void solve(){
    int m,n;
    cin>>m>>n;
    if(n>m){
        no;
        return;
    }
    br(m);
    int x=*s.begin();
    // print(s);
    if(s.find(n%x)!=s.end() || n%x==0) yes;
    else no;
    s.clear();
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}