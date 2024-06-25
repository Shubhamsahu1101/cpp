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
    int c0=0,c1=0,c2=0;
    forl(i,0,l){
        cin>>t;
        if(t%3==0) c0++;
        else if(t%3==1) c1++;
        else c2++;
    }
    l/=3;
    int m,ans=0;
    // cout<<c0<<" "<<c1<<" "<<c2<<endl;
    while(c0!=l || c1!=l || c2!=l){

    
    if(c2>l && c0<l){
        m=min(c2-l,l-c0);
        ans+=m;
        c0+=m;
        c2-=m;
    }
    else if(c2>l && c1<l){
        m=min(c2-l,l-c1);
        ans+=2*m;
        c1+=m;
        c2-=m;
    }
    else if(c0>l && c1<l){
        m=min(c0-l,l-c1);
        ans+=m;
        c1+=m;
        c0-=m;
    }
    else if(c0>l && c2<l){
        m=min(c0-l,l-c2);
        ans+=2*m;
        c2+=m;
        c0-=m;
    }
    else if(c1>l && c2<l){
        m=min(c1-l,l-c2);
        ans+=m;
        c2+=m;
        c1-=m;
    }
    else if(c1>l && c0<l){
        m=min(c1-l,l-c0);
        ans+=2*m;
        c0+=m;
        c1-=m;
    }

    }
    cout<<ans<<endl;
    // cout<<c0<<" "<<c1<<" "<<c2<<endl;
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