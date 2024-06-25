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

bool customComparator(const string &a, const string &b) {
    forl(i,0,a.size()){
        if((i+1)%2!=0){
            if(a.at(i) < b.at(i)) return true;
            else if (a.at(i) > b.at(i)) return false;
            else continue;
        }
        else{
            if(a.at(i) > b.at(i)) return true;
            else if (a.at(i) < b.at(i)) return false;
            else continue;
        }
    }
    return false;
}

void solve(){
    int x,y;
    cin>>x>>y;
    string t;
    map<string, int, bool (*)(const string&, const string&)> m(customComparator);
    forl(i,0,x){
        cin>>t;
        m[t]=i+1;
    }
    forall(i,m){
        cout<<i->second<<" ";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}
