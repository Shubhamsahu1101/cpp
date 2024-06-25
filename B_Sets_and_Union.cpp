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
    // int arr[50][50]={-1};
    vector<vector<int>> v;
    set<int> total;
    forl(i,0,l){
        int t;
        cin>>t;
        vector<int> v1;
        forl(j,0,t){
            int x;
            cin>>x;
            v1.pb(x);
            total.insert(x);
        }
        v.pb(v1);
    }
    // forl(i,0,v.size()){
    //     forl(j,0,v[i].size()){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    map<int,int> mp;
    map<int,int> mp2;
    forl(i,0,v.size()){
        set<int> s;
        forl(j,0,v.size()){
            if(j==i) continue;
            forl(k,0,v[j].size()){
                s.insert(v[j][k]);
            }
        }
        mp[i]=0;
        mp2[i]=0;
        forl(j,0,v[i].size()){
            if(s.find(v[i][j])==s.end()){
                mp[i]++;
            }
            else mp2[i]++;
        }
    }
    forall(it,mp){
        cout<<it->first<<" "<<it->second<<endl;
    }
    forall(it,mp2){
        cout<<it->first<<" "<<it->second<<endl;
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