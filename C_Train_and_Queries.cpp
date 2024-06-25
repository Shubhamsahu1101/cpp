#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define print(cont) forall(it,cont){cout<<*(it)<<" ";}
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l,n;
    cin>>l>>n;
    int t;
    map<int,set<int>> mp;
    forl(i,0,l){
        cin>>t;
        mp[t].insert(i);
    }


    cout<<" mapp "<<endl;
    forall(it,mp){
        cout<<it->first<<"   ";
        print(it->second);
        forall(it1,it->second){cout<<*it1<<" ";}
        cout<<endl;
    }
    cout<<endl;cout<<endl;


    int a,b;
    forl(i,0,n){
        cin>>a>>b;
        if(mp[a].empty() || mp[b].empty()) no;
        else if(*mp[a].begin()<*--mp[b].end()) yes;
        else no;
    }
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