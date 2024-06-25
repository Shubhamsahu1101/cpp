#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int n,k; cin>>n>>k;
    if(k>n){
        // cout<<"1";cout<<endl;
        no;
    }
    else if(n%k==0){
        // cout<<"2";cout<<endl;
        yes;
        forl(i,0,k){
            cout<<n/k<<" ";
        }cout<<endl;
    }
    else{
        // cout<<"3";cout<<endl;
        if((n-(k-1))>0 && (n-(k-1)) % 2==1){
            // cout<<(n-(k-1))<<"a1"<<endl;
            yes;
            forl(i,0,k-1){
                cout<<1<<" ";
            }
            cout<<n-(k-1);
            cout<<endl;
        }
        else if((n-((k-1)*2))>0 && (n-((k-1)*2))%2==0){
            // cout<<(n-((k-1)*2))<<"aa"<<endl;
            yes;
            forl(i,0,k-1){
                cout<<2<<" ";
            }
            cout<<(n-((k-1)*2));
            cout<<endl;
        }
        else no;
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