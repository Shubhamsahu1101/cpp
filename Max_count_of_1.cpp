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
    string s;
    cin>>s;
    int a=0,c1=0,c2=1;
    forl(i,0,l-1){
        a^=(s.at(i)-48);
        // cout<<a;
        if(a) c1++;
    }
    // cout<<endl;
    a=1;
    forl(i,0,l-1){
        a^=(s.at(i)-48);
                // cout<<a;

        if(a) c2++;
    }
    // cout<<endl;
    cout<<max(c1,c2)<<endl;
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