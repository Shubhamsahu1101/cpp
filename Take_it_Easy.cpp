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
    int n;
    cin>>n;
    vector<int> v(n);
    int s=0;
    forl(i,0,n){
        cin>>v[i];
        s+=v[i];
    }
    if(s%n!=0){
        no;
        return;
    }
    s/=n;
    int a;
    forl(i,0,n){
        a=abs(v[i]-s);
        if(a%2!=0 && abs(v[i]-s)!=0){
            no;
            return;
        }
    }
    yes;
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