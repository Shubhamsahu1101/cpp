#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int long long
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

void solve(){
    int l; cin>>l;
    int ans;
    bool one=true,zero=true;
    int b1=-1,b2=-1,i=0;
    while(one || zero){
        if((l&1)==1){
            b2=i;
            one=false;
            if((l>>1)>0){
                ans=(pow(2,b2));
                break;
            }
            else if(b2>0){
                ans=(pow(2,b2)+1);
                break;
            }
            else{
                ans=(pow(2,b2)+pow(2,b2+1));
                break;
            }
        }
        l>>=1;
        i++;
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