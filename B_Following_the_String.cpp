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
    int l;
    cin>>l;
    int arr[l];
    forl(i,0,l){
        cin>>arr[i];
    }
    int x=0;
    map<int,set<char>> m;
    forl(i,0,l){
        if(arr[i]==0){
            cout<<char(x+97);
            m[1].insert(char(x+97));
            x++;
        }
        else{
            int a=arr[i];
            // if(m[a].empty()){
            //     cout<<".";
            // }
            // else{
                cout<<*m[a].begin();
                m[a+1].insert(*m[a].begin());
                m[a].erase(m[a].begin());
            // }
        }
        // forall(it,m){
        //     cout<<it->first<<": "<<it->second.size()<<" ";
        // }cout<<endl;
    }
    cout<<endl;
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