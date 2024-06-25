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

void solve(){
    int l;
    cin>>l;
    string str;
    cin>>str;
    map<int,int> m;
    int e=0,o=0;
    forl(i,0,l){
        m[str.at(i)]++;
    }
    forall(it,m){
        if(it->second%2==0) e++;
        else o++;
    }
    if(o<2 && e==0){
        cout<<2<<endl;
    }
    else if(o<2 && e>0){
        cout<<1<<endl;
    }
    else if(o>0) {cout<<0<<endl;}
    // cout<<e<<o<<endl;
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