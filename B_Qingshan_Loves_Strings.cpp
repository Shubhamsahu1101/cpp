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
    int n,m;
    cin>>n>>m;
    string s;
    string t;
    cin>>s>>t;
    if(n==1){
        yes;
        return;
    }
    bool zz=false,oo=false;
    forl(i,0,n-1){
        if(s.at(i)==s.at(i+1) && s.at(i)=='0') zz=true;
        else if(s.at(i)==s.at(i+1) && s.at(i)=='1') oo=true;
    }
    
    if(zz && oo){
        no;
        return;
    }
    if(zz || oo){
        if(t.at(0)!=t.at(m-1)){
            no;
            return;
        }
        forl(i,0,m-1){
            if(t.at(i)==t.at(i+1)){
                no;
                return;
            }
        }
    }
    if(zz){
        if(t.at(0)==t.at(m-1) && t.at(0)=='1'){
            yes;
        }
        else{
            no;
        }
            return;
    }
    if(oo){
        if(t.at(0)==t.at(m-1) && t.at(0)=='0'){
            yes;
        }
        else{
            no;
        }
            return;
    }
    yes;
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