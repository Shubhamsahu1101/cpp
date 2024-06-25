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
    string p[4];
    cin>>p[0]>>p[1]>>p[2]>>p[3];
    int c;
    forl(i,0,3){
        forl(j,0,3){
            c=0;
            if(p[i].at(j)=='.') c++;
            else c--;
            if(p[i+1].at(j)=='.') c++;
            else c--;
            if(p[i].at(j+1)=='.') c++;
            else c--;
            if(p[i+1].at(j+1)=='.') c++;
            else c--;
            if(abs(c)==2 || abs(c)==4){
                yes;
                return;
            }
        }
    }
    no;
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