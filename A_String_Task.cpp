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
    string str,ans="";
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),[](char c){return tolower(c);});
    forl(i,0,str.length()){
        if(str.at(i)=='a' || str.at(i)=='e' || str.at(i)=='i' || 
        str.at(i)=='o' || str.at(i)=='u' || str.at(i)=='y'){
            continue;
        }
        else{
            ans+=".";
            ans+=str.at(i);
        } 
    }
    // forl(i,0,str.length()){
    //     if(i&1!=1){
    //         // str.replace(i,1,".");
    //         str.insert(i,".");
    //     }
    // }
    cout<<ans<<endl;
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