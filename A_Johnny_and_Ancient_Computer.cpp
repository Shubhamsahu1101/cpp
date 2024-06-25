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
    int a,b;
    cin>>a>>b;
    int c1=0,c2=0;
    forl(i,0,64){
        if(a&1==1){
            c1=i;
            break;
        }
        a>>=1;
    }
    forl(i,0,64){
        if(b&1==1){
            c2=i;
            break;
        }
        b>>=1;
    }
    // cout<<c1<<" c1c2 "<<c2<<endl;
    int ans=abs(c2-c1)/3 + (abs(c2-c1)%3? 1:0);
    if(a==b) cout<<ans<<endl;
    else cout<<-1<<endl;
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