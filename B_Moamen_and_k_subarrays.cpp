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
    int l,k,curr,prev=INT64_MIN,c=0;
    cin>>l>>k;
    int arr[l];
    set<int> check;
    forl(i,0,l){
        cin>>arr[i];
        check.insert(arr[i]);
    }
    int e=0;
        auto it=check.find(arr[0]);
    while(e<l){
        while(arr[e]==*it && e<l && it!=check.end()){
            // cout<<e<<" "<<arr[e]<<" "<<*it<<endl;
            e++;it++;
        }
        // cout<<"b"<<endl;
        it=check.find(arr[e]);
        c++;
    }
    // cout<<c<<endl;
    if(c>k) no;
    else yes;
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