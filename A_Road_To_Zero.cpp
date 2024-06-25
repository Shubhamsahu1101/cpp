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
    int x,y;
    cin>>x>>y;
    int a,b;
    cin>>a>>b;
    if(2*a>=b){

    
    if(x>0 && y>0) cout<<(abs(x-y)*a+min(x,y)*b)<<endl;
    else if(x<0 && y<0){
        cout<<(abs(x-y)*a+abs(max(x,y))*b)<<endl;
    }
    else cout<<abs(x)*a+abs(y)*a<<endl;
    }
    else{
        cout<<abs(x)*a+abs(y)*a<<endl;
    }
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