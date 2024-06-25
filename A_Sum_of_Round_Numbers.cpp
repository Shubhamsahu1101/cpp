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
    vector<int> v;
    int t,d=0;
    while(l){
        t=l%10;
        if(t!=0){
            v.push_back(t*pow(10,d));
        }
        l/=10;d++;
    }
    cout<<v.size()<<endl;
    forall(it,v){
        cout<<*it<<" ";
    }cout<<endl;
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