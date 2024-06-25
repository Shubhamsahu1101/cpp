#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l,k; cin>>l>>k;
    int t,b[31]={0};
 
    cin>>t;int ans=t;
    forl(j,0,31){
        if(!(t & 1<<j)) b[j]++;
    }
    forl(i,1,l){
        cin>>t;
        ans&=t;
        forl(j,0,31){
            if(!(t & 1<<j)) b[j]++;
        }
    }
 
    // forl(i,0,31){
    //     cout<<b[30-i]<<" ";
    // }cout<<endl;
    // cout<<ans<<endl;
 
    int mn=INT64_MAX;
    forl(i,0,31){
        if(b[i]) mn=min(b[i],mn);
    }
    // cout<<mn<<endl;
 
    int i=30;
    while(k>=mn){
        while(b[i]>k) i--;
        if(i<0) break;
        // cout<<"i "<<i<<" ";
        (ans |= 1<<i);
        k-=b[i];
        i--;
    }
 
 
    cout<<ans<<endl;
    
 
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