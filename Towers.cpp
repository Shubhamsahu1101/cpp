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
    int l,t;
    cin>>l;
    multiset<int> s;
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    forl(i,0,l){
        t=arr[i];
        auto it=s.upper_bound(t);
        // while(*it==t){
        //     it++;
        // }
        if(it==s.end()){
            s.insert(t);
        }
        else{
            s.erase(it);
            s.insert(t);
        }
    }
    cout<<s.size()<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}