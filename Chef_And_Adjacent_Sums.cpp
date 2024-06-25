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
    map<int,int> m;
    int t;
    forl(i,0,l){
        cin>>t;
        m[t]++;
    }
    if(l==2){
        no;
        return;
    }
    auto i=--m.end();
    int temp=0;
    if(i->second>1){
        // temp=(i->first)*2;
        if(i->second<=l-i->second+1){
            yes;
            return;
        }
        else{
            no;
        }
    }
    else{
        // temp+=(i->first);
        // i--;
        // temp+=(i->first);
        yes;
        return;
    }
    // cout<<temp<<endl;
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