#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int n,q; cin>>n>>q;
    vector<int> h,pf,qr;

    int temp;
    forl(i,0,n){
        cin>>temp;
        h.push_back(temp);
    }
    forl(i,0,q){
        cin>>temp;
        qr.push_back(temp);
    }
    temp=h.at(0);
    pf.push_back(h.front());
    forl(i,1,n){
        pf.push_back(pf.back()+h.at(i));
        temp=max(temp,h.at(i));
        h.at(i)=temp;
    }


    // forall(it,h){
    //     cout<<*it<<" ";
    // }cout<<endl;
    // forall(it,pf){
    //     cout<<*it<<" ";
    // }cout<<endl;

    int i;
    forall(it,qr){
        // cout<<*it<<" ";
        if(*it<h.at(0)) cout<<0<<" ";
        else{
            cout<<pf.at(--upper_bound(h.begin(),h.end(),*it)-h.begin())<<" ";
        }
    }cout<<endl;
    
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