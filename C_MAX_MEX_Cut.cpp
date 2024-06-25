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
    string s1; string s2;
    cin>>s1; cin>>s2;
    vector<int> v;
    
    forl(i,0,l){
        if(s1.at(i)=='0' && s2.at(i)=='1' || s1.at(i)=='1' && s2.at(i)=='0'){
            v.pb(2);
        }
        else if(s1.at(i)=='0' || s2.at(i)=='0'){
            v.pb(1);
        }
        else v.pb(0);
    }
    // print(v);
    int ans=0;
    forl(i,1,l){
        if(v.at(i)==1 && v.at(i-1)==0 || v.at(i)==0 && v.at(i-1)==1){
            ans+=2;
            v.at(i)=-1;
            v.at(i-1)=-1;
        }
    }
    forl(i,0,l){
        if(v.at(i)!=-1) ans+=v.at(i);
    }
    cout<<ans<<endl;
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