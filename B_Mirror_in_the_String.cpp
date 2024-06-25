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
    string str; 
    cin>>l>>str;
    char prev=str.at(0);
    int i;
    for(i=1;i<l;i++){
        if(str.at(i)!=str.at(i-1)) prev=str.at(i-1);
        if(str.at(i)>=prev) break;
    }
    
    string ans=str.substr(0,i);
    cout<<ans;
    forr(j,i-1,0){
        cout<<ans.at(j);
    }
    cout<<endl;
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