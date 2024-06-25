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
    string str,check,temp,m="0",mless="0";
    cin>>str;check=str;
    int x;

    forl(i,0,str.size()-1){
        x=str.at(i)+str.at(i+1)-96;
        if(x>=10){
            if(x<str.at(i)+str.at(i+1)-96) continue;
            check.replace(i,2,to_string(x));
            if(check.compare(m)>0) m=check;
            check=str;
        }
    }
    if(m=="0"){
        forl(i,0,str.size()-1){
        x=str.at(i)+str.at(i+1)-96;
        if(x<10){
            if(x<str.at(i)-48) continue;
            check.replace(i,2,to_string(x));
            if(check.compare(mless)>0) mless=check;
            check=str;
        }
        }
        cout<<mless<<endl;
    }
    else cout<<m<<endl;
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