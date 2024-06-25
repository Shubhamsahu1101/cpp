#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void solve(){
    int l,n;
    cin>>l>>n;
    int t;
    vector<int> v;
    vector<int> p; p.push_back(0);
    vector<int> s;
    forl(i,0,l){
        cin>>t;
        v.push_back(t);
        p.push_back(t+p.back());
    }
//shubham
    int a,b,c;
    forl(i,0,n){
        cin>>a>>b>>c;
        if(((p.back()-p.at(b))+p.at(a-1)+((b-a+1)*c))&1==1){
            yes;
        }
        else{
            no;
        }
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