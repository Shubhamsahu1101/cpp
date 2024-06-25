#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

void solve(){
    int l,k;
    cin>>l>>k;

    int t;
    map<int,int> mp;
    forl(i,0,l){
        cin>>t;
        mp[t]++;
    }
    // vector<int> v;

    // cout<<"mapp"<<endl;
    // forall(it,mp){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }cout<<endl<<endl;

    vector<int> v;
    auto it=mp.begin();
    forl(i,0,mp.size()){
        if(it->second>=k) v.push_back(it->first);
        it++;
    }

    // forl(i,0,v.size()){
    //     cout<<v.at(i)<<" ";
    // }cout<<endl;cout<<endl;

    int s=0,e=0;
    int x=1,y=0;
    while(e<v.size()){
        // cout<<v.at(s)<<" "<<v.at(e)<<endl;
        while(e<v.size()-1 && v.at(e)+1==v.at(e+1)){
            e++;
        }
        if(v.at(e)-v.at(s)>y-x){
            y=v.at(e);x=v.at(s);
        }
        e++;s=e;
    }
    // cout<<endl;
    if(x==1 && y==0) cout<<-1<<endl;
    else cout<<x<<" "<<y<<endl;
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