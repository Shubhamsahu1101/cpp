#include <bits/stdc++.h>
#define forall(it, cont) for (auto it = cont.begin(); it != cont.end(); it++)
#define forl(i, a, b) for (int i = a; i < b; i++)
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
 
void solve(){
    int l,c=0; cin>>l;
    string str; cin>>str;
    forl(i,1,l-1) if(str.at(i-1)==str.at(i+1)) c++;
    cout<<l-c-1<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;cin>>t;
    for(int tc= 0; tc < t; tc++) solve();
    return 0;
}