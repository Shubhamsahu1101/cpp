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
    string s;
    cin>>l;
    cin>>s;
    if(l==1){
        if(s.at(0)=='0'){
            yes;
        }
        else no;
        return;
    }
    int zero=0,one=0;
    forl(i,0,l-1){
        if(s.at(i)=='0') zero++;
        else if(s.at(i)=='1') one++;
        if(s.at(i)=='1' && s.at(i+1)=='0' || s.at(i)=='0' && s.at(i+1)=='1'){
            yes;
            return;
        }
    }
    if(s.at(l-1)=='0') zero++;
    if(s.at(l-1)=='1') one++;
    if(zero>one){
        yes;
        return;
    }
    no;
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