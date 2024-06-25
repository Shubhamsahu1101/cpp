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
    int a;
    cin>>a;
    int pf1[a+1]={0};
    forl(i,0,a){
        cin>>pf1[i+1];
        pf1[i+1]=pf1[i]+pf1[i+1];
    }
    int b;
    cin>>b;
    int pf2[b+1]={0};
    forl(i,0,b){
        cin>>pf2[i+1];
        pf2[i+1]=pf2[i]+pf2[i+1];
    }
    // printarr(pf1);
    // printarr(pf2);
    int m=INT64_MIN;
    forl(i,0,a+1){
        forl(j,0,b+1){
            m=max(m,pf1[i]+pf2[j]);
        }
    }
    m=max((int)0,m);
    cout<<m<<endl;

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