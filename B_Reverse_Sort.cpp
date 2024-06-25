#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    int l; cin>>l;
    string s1;
    cin>>s1;
    string s2=s1;
    vector<int> v;
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<0<<endl;
        return;
    }
    forl(i,0,l){
        if(s1.at(i)!=s2.at(i)) v.pb(i+1);
    }
    cout<<1<<endl;
    cout<<v.size()<<" ";
    print(v);

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