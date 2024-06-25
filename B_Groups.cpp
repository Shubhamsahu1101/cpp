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
    int l,t;
    cin>>l;
    map<string,set<int>> mp;
    set<int> check,temp;
    forl(i,1,l+1){
        check.insert(i);
    }
    forl(i,1,l+1){
        cin>>t;
        if(t) mp["mon"].insert(i);
        cin>>t;
        if(t) mp["tue"].insert(i);
        cin>>t;
        if(t) mp["wed"].insert(i);
        cin>>t;
        if(t) mp["thu"].insert(i);
        cin>>t;
        if(t) mp["fri"].insert(i);
    }
    forall(it,mp){
        forall(it1,mp){
            if(it->second.size()>=l/2 && it1->second.size()>=l/2 && it!=it1){
                temp.insert(it->second.begin(),it->second.end());
                temp.insert(it1->second.begin(),it1->second.end());
                if(temp==check){
                    yes; return;
                }
                temp.clear();
            }
        }
    }
    no;
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