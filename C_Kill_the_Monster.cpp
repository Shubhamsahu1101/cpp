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
    int hc,dc,hm,dm,k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    int hct,dct;
    forl(i,0,k+1){
        hct=hc+(i*a);
        dct=dc+((k-i)*w);
        if((hct/dm + (hct%dm? 1:0))>=(hm/dct + (hm%dct? 1:0))){
            yes;
            return;
        }
    }
    no;
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