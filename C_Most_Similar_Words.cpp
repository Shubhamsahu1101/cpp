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
    int n;
    cin>>n;
    string str[l];
    forl(i,0,l){
        cin>>str[i];
    }
    int x=0;
    int m=INT64_MAX;
    forl(i,0,l){
        forl(j,i+1,l){
            forl(k,0,n){
                x+=abs(str[i].at(k)-str[j].at(k));
            }
            m=min(m,x);x=0;
        }
    }
    cout<<m<<endl;
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