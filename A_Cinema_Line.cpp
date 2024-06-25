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
    cin>>l;
    int t5=0,ft=0,t;
    forl(i,0,l){
        cin>>t;
        if(t==25) t5++;
        else if(t==50){
            if(t5){
                t5--;
                ft++;
            }
            else{
                no;
                return;
            }
        }
        else{
            if(ft && t5){
                ft--;t5--;
            }
            else if(t5>=3){
                t5--;t5--;t5--;
            }
            else{
                no;
                return;
            }
        }
    }
    yes;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    //cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}