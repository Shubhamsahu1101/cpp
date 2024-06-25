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
    string a,b,c,d,temp;
    cin>>a>>b;
    int m=INT64_MAX;
    if(a.length()>b.length()){
        c=b;
        d=a;
    }
    else{
        d=b;
        c=a;
    }
    forl(i,0,c.length()){
        forl(j,1,c.length()-i+1){
            temp=c.substr(i,j);
            if(d.find(temp) != string::npos){
                if(d.length()+c.length()-2*j<m){
                    m=d.length()+c.length()-2*j;
                }
            }
        }
    }
    if(m==INT64_MAX) cout<<d.length()+c.length()<<endl;
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