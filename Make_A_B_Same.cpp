#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l;
    cin>>l;
    int a[l];
    int b[l];
    int c=0;
    
    forl(i,0,l){
        cin>>a[i];
        if(a[i]==1) c++;
    }
    forl(i,0,l){
        cin>>b[i];
    }
    // forl(i,0,l){
    //     cout<<a[i]<<" ";
    // }cout<<endl;
    // forl(i,0,l){
    //     cout<<b[i]<<" ";
    // }cout<<endl;
    if(a[0]!=b[0] || a[l-1]!=b[l-1]){
        no;
        return;
    }
    forl(i,0,l){
        if(a[i]!=b[i]){
            if(a[i]==1 && b[i]==0){
                no;
                return;
            }
            else{
                if(c) continue;
                else{
                    no;
                    return;
                }
            }
        }
    }
    yes;

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