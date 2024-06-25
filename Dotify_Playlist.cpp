#include <bits/stdc++.h>
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define pb push_back
using namespace std;

void solve(){
    int a,b,l;
    cin>>a>>b>>l;
    int mi,la;
    map<int,int> mp;
    vector<int> vect;
    forl(i,0,a){
        cin>>mi>>la;
        if(la==l) vect.pb(mi);
    }
    sort(vect.begin(),vect.end(),greater<>());
    int ans=0;
    if(vect.empty() || vect.size()<b){
        cout<<-1<<endl;
        return;
    }
    
    forl(i,0,b){
        ans+=vect[i];
    }
    cout<<ans<<endl;
}
signed main(){
    int t=1;
    cin>>t;
    for(int tc= 0; tc < t; tc++){
        solve();
    }
    return 0;
}