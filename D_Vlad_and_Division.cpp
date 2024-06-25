#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
#define int unsigned int
#define pb push_back
#define M 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define print(cont) forall(it,cont){cout<<*it<<" ";}cout<<endl
#define printarr(arr) forl(i,0,sizeof(arr)/sizeof(arr[0])){cout<<arr[i]<<" ";}cout<<endl
using namespace std;

int flipFirst32Bits(int num) {
    return num ^ (2147483647);
}

void solve(){
    int l;
    cin>>l;
    int t;
    map<int,int> m;
    int c=0;
    // set<int> st;
    forl(i,0,l){
        cin>>t;
        int x=flipFirst32Bits(t);
        if(!m[x]){
            m[t]++;
            c++;
        }
        else{
            m[x]--;
        }
        // cout<<t<<" "<<x<<endl;
    }
    cout<<c<<endl;
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