#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    string str;
    cin>>str;
    set<char> s1;
    set<char> s2;
    forl(i,0,l){
        if(i&1==1) s1.insert(str.at(i));
        else s2.insert(str.at(i));
    }
    forall(it,s1){
        if(s2.find(*it)!=s2.end()){
            no;
            return;
        }
        else continue;
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