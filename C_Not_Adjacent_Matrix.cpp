#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i > b; i--)
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define cout(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    if(l==2){
        cout<<-1<<endl;
        return;
    }
    int a=2,b=1;
    forl(i,0,l){
        forl(j,0,l){
            if(a<=l*l){
                cout<<a<<" ";
                a+=2;
            }
            else{
                cout<<b<<" ";
                b+=2;
            }
        }
        cout<<endl;
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