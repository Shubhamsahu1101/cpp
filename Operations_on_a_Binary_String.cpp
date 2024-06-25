#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int n,k; cin>>n>>k;
    string str;
    cin>>str;
    map<int,int,greater<int>> mp;
    int s=0,e=0;
    int c=0;
    forl(i,0,n){
        if(str.at(i)=='1') c++;
    }
    while(e<n){
        while(e<n && str.at(e)!='1'){
            e++;
        }
        // cout<<s<<" "<<e<<endl;
        if(e-s>1){
            mp[e-s-1]++;
        }
        s=e;e++;
    }
    // cout<<endl;
    // cout<<" c "<<c;
    forall(it,mp){
        if(k>=it->first*2+1){
            c+=it->first;
            k-=it->first*2+1;
        }
        mp[it->first]--;
        // cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<c<<endl;


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