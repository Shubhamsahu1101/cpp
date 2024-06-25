#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
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
    vector<int> t;
    vector<int> m;
    forl(i,0,l){
        if(str.at(i)=='T') t.pb(i);
        else m.pb(i);
    }
    if(m.size()*2!=t.size()){
        no;
        return;
    }
    forl(i,0,m.size()){
        if(m.at(i)<t.at(i) || m.at(i)>t.at(m.size()+i)){
            no;
            return;
        }
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